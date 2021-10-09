// pages/music/music.js
Page({
  /**
   * 页面的初始数据
   */
  data: {},

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
    wx.playBackgroundAudio({
      dataUrl: "http://www.ytmp3.cn/down/57642.mp3",
      title: "爱拼才会赢",
      loop: "true",
    });
    this.setData({
      bgmusic: wx.getBackgroundAudioManager(),
    });
    //使用方式如: this.data.bgmusic.play();//播放
  },

  // /**
  //  * 生命周期函数--监听页面初次渲染完成
  //  */
  onReady: function () {},

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {},

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {},

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {},

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {},

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {},

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {},

  start: function () {
    this.data.bgmusic.play();
  },
  pause: function () {
    this.data.bgmusic.pause();
  },

  // audioPlay: function () {
  //   this.audioCtx.play();
  // },
  // audioPause: function () {
  //   this.audioCtx.pause();
  // },
});
