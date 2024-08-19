Pod::Spec.new do |spec|
  spec.name       = "BitkubChainSDK"
  spec.version    = "0.1.0"
  spec.summary    = "Bitkub Chain SDK"
  spec.license    = { :type => "MIT" }
  spec.homepage   = "https://bitkubchain.com"
  spec.authors    = "Bitkub Blockchain Technology"
  spec.source     = { :git => "https://github.com/bitkub-chain/bitkubchain-sdk-ios.git", :tag => spec.version }
  spec.vendored_frameworks = "BitkubChainSDKKit.xcframework"
  spec.ios.deployment_target = "13.0"
end
