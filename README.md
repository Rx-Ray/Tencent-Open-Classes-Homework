# 腾讯游戏客户端公开课作业内容简介
## 游戏模式
### 实现击中方块计分功能

### 特殊方块实现

### 实现游戏计时功能，并在计时结束时结束游戏

![EndPanel](/ReadmeImage/EndPanel.png)

### 增加弹药计数


## UMG
### 基于射线检测实现准星瞄准可射击物体时变色

![Black](/ReadmeImage//BlackForesight.png)

![Red](/ReadmeImage/RedForesight.png)

### 绘制登录页面，实现过渡界面
简单绘制了一个登录界面，不包含实际登录逻辑，点击登录按钮后会进入加载界面，并在一定事件后解除暂停进入游戏

![LoginImage](/ReadmeImage/LoginImage.png)

### 实现血条、在枪械捡起时显示枪械相关UI等

![LoadingBar](/ReadmeImage/LoadingBar.png)

## 动画蓝图
### 实现NPC 闲置-跑步-死亡等状态的动画切换机制

动画蓝图中动画状态机部分的展示：

![StateMachine](/ReadmeImage/StateMachine.png)

## 游戏智能
### 借助行为树实现AI的自主行为逻辑

游戏中借助行为树实现了两个NPC，一个会随机向可到达的位置，另外一个会在两点之间来回跑动

NPC A的随机跑动以及其行为树逻辑：

![Run](/ReadmeImage/RunningToAnyWhere.png)
![BehaviorTree](/ReadmeImage/ATree.png)

NPC B正在来回跑动以及其行为树逻辑：

![Run](/ReadmeImage/RunningInWater.png)
![BehaviorTree](/ReadmeImage/BTree.png)

### 借助感知组件实现AI对环境的感知

游戏加载后AI角色第一次执行跑动行为时会向角色跑来并且挥手

![Wave](/ReadmeImage/Wave.png)

## Niagara
### 借助插件实现2D交互水面