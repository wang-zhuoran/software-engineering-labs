// components/bottomIcon/bottomIcon.js
Component({
  /**
   * 组件的属性列表
   */
  properties: {},

  /**
   * 组件的初始数据
   */
  data: {},

  /**
   * 组件的方法列表
   */
  methods: {
    toRecord() {
      wx.navigateTo({
        url: "/pages/record/record",
      });
    },
    toSetup() {
      wx.navigateTo({
        url: "/pages/music/music",
      });
    },
    toHelp() {
      wx.navigateTo({
        url: "/components/rule/rule",
      });
    },
  },
});
