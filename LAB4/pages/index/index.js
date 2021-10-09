// index.js
// 获取应用实例
const app = getApp()

Page({
  data: {
    motto: 'Hello World',
    userInfo: {},
    hasUserInfo: false,
    canIUse: wx.canIUse('button.open-type.getUserInfo'),
    canIUseGetUserProfile: false,
    canIUseOpenData: wx.canIUse('open-data.type.userAvatarUrl') && wx.canIUse('open-data.type.userNickName'), // 如需尝试获取用户信息可改为false
    
  },
  // 事件处理函数
  bindViewTap() {
    wx.navigateTo({
      url: '../logs/logs'
    })
  },
  onLoad() {
    if (wx.getUserProfile) {
      this.setData({
        canIUseGetUserProfile: true
      })
    }
  },
  toSingleGame(){
    wx.navigateTo({
      url: '/pages/singleGame/singleGame',
    })
  },
  toBobingHall(){
    wx.navigateTo({
      url: '/pages/bobingHall/bobingHall',
    })
  },
  toCreateRoom(){
    wx.navigateTo({
      url: '/pages/createRoom/createRoom',
    })
  }
  
})
