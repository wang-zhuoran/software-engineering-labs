// pages/addRoom/addRoom.js
var app = getApp();
var roomID = "";
var num = "";
var p = 1;
var rank = "";
var score = ""; //记录积分

Page({
  /**
   * 页面的初始数据
   */
  data: {
    p: 1, //第几个玩家在游戏中  0表示都投掷完毕
    statu: 0, //状态：0创建房间界面，1未开始，2投掷中, 3出结果
    resultList: [],
    rank: "", //单机情况玩家判定结果
    score: "", //记录积分
    rank1: "", //玩家1判定的结果
    rank2: "", //玩家2判定的结果
    rank3: "", //玩家3判定的结果
    rank4: "", //玩家4判定的结果
    score1: "",
    score2: "",
    score3: "",
    score4: "",
    select: false,
    num: "--请选择人数--",
    nums: ["2人", "3人", "4人"],

    userName: ["Joseph", "LeCun", "Bengio", "Hindon"],

    // 骰子图片地址
    dices: [
      "playDice.gif",
      "1.jpg",
      "2.jpg",
      "3.jpg",
      "4.jpg",
      "5.jpg",
      "6.jpg",
    ],

    //博饼结果
    dicelist: ["1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg", "6.jpg"],
  },

  /**
   * 点击下拉框
   */
  bindShowMsg() {
    this.setData({
      select: !this.data.select,
    });
  },
  /**
   * 已选下拉框
   */
  mySelect(e) {
    console.log(e);
    var name = e.currentTarget.dataset.name;
    console.log("选择房间人数", name);
    this.setData({
      num: name,
      select: false,
    });
    num = name;
  },
  //输入框
  bindKeyInput: function (e) {
    this.setData({
      roomID: e.detail.value,
    });
    roomID = e.detail.value;
    console.log("输入房间名称", roomID);
  },

  //确定按钮
  click() {
    console.log("确定房间名称：", roomID);
    console.log("确定房间人数：", num);
    if (!this.data.roomID) {
      this.setData({
        infoMess: "温馨提示：房间名不能为空！",
      });
    } else {
      this.setData({
        infoMess: "",
        roomID: roomID,
        statu: 1,
      });
      wx.setStorageSync("roomID", num);
      console.log("创建成功！");
    }
  },

  click1() {
    console.log("点击投掷");
    this.setData({
      statu: 2,
      finallyRank: [],
    });
  },

  click2() {
    console.log("点击停止投掷");
    this.setData({
      statu: 3,
    });
    this.result();
  },

  random(min, max) {
    //生成随机数
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min + 1) + min);
  },

  result() {
    var list = [];
    var listsrc = [];
    var one = 0; //统计投掷结果
    var two = 0;
    var three = 0;
    var four = 0;
    var five = 0;
    var six = 0;
    for (var i = 0; i < 6; i++) {
      var t = this.random(1, 6);
      list.push(t);
      if (t == 1) one++;
      if (t == 2) two++;
      if (t == 3) three++;
      if (t == 4) four++;
      if (t == 5) five++;
      if (t == 6) six++;
    }
    this.setData({
      resultList: list,
    });
    for (var i = 0; i < 6; i++) {
      var dicesrc = this.data.resultList[i] + ".jpg";
      listsrc.push(dicesrc);
    }
    this.setData({
      dicelist: listsrc,
    });
    var flag = 0;
    if (
      one == 1 &&
      two == 1 &&
      three == 1 &&
      four == 1 &&
      five == 1 &&
      six == 1
    ) {
      this.setData({
        rank: "对堂！",
        score: "+300",
      });
      flag = 1;
    } else {
      if (four == 1) {
        this.setData({
          rank: "一秀！",
          score: "+10",
        });
        flag = 1;
      }
      if (four == 2) {
        this.setData({
          rank: "二举！",
          score: "+50",
        });
        flag = 1;
      }
      if (four == 3) {
        this.setData({
          rank: "三红！",
          score: "+200",
        });
        flag = 1;
      }
      if (four == 4) {
        if (one == 2) {
          this.setData({
            rank: "状元插金花！",
            score: "+1000",
          });
          flag = 1;
        } else {
          this.setData({
            rank: "状元！",
            score: "+500",
          });
          flag = 1;
        }
      }
      if (four == 6) {
        this.setData({
          rank: "六杯红！",
          score: "+500",
        });
        flag = 1;
      }
      if (three == 4) {
        this.setData({
          rank: "四进！",
          score: "+100",
        });
        flag = 1;
      }
      if (three == 5) {
        this.setData({
          rank: "五王！",
          score: "+500",
        });
        flag = 1;
      }
      if (six == 6) {
        this.setData({
          rank: "六杯黑！",
          score: "+500",
        });
        flag = 1;
      }
    }
    if (flag == 0) {
      this.setData({
        rank: "再接再厉哦",
        score: "+0",
      });
    }
    // console.log(this.data.resultList)
    console.log("输出投掷结果:", this.data.rank);
    rank = this.data.rank;
    score = this.data.score;
  },

  click3() {
    this.setData({
      statu: 1,
    });
  },

  next2() {
    //点击轮到玩家2
    this.setData({
      p: 2,
      statu: 1,
      rank1: rank,
      score1: score,
    });
  },

  next3() {
    //点击轮到玩家3
    this.setData({
      p: 3,
      statu: 1,
      rank2: rank,
      score2: score,
    });
  },

  next4() {
    //点击轮到玩家4
    this.setData({
      p: 4,
      statu: 1,
      rank3: rank,
      score3: score,
    });
  },

  finish() {
    //点击生成结果
    this.setData({
      p: 0,
    });
    if (num == "2人") {
      this.setData({
        rank2: rank,
        score2: score,
      });
    }
    if (num == "3人") {
      this.setData({
        rank3: rank,
        score3: score,
      });
    }

    if (num == "4人") {
      this.setData({
        rank4: rank,
        score4: score,
      });
    }
    console.log("排名完成");
  },
  toFirstPage() {
    //跳转到首页
    wx.navigateTo({
      url: "/pages/enter/enter",
    });
  },
});
