Pod::Spec.new do |s|

  s.name         = "HKLSocketStubServer"
  s.version      = "0.0.1"
  s.license      = 'MIT'
  s.summary      = "Simple fake(mock) TCP server for iOS testing. Strongly inspired by NLTHTTPStubServer."
  s.author       = "Hirohito Kato"
  s.homepage     = "https://github.com/katokichisoft/HKLSocketStubServer"

  s.ios.deployment_target = '8.0'
  # s.osx.deployment_target = '10.7'
  s.source       = { :git => "https://github.com/katokichisoft/HKLSocketStubServer.git", :tag => "0.0.1" }
  s.source_files  = 'HKLSocketStubServer/**/*.{h,m}'
  s.exclude_files = 'HKLSocketStubServer/Exclude'
  s.requires_arc = true

  s.dependency 'CocoaAsyncSocket', '~> 7.5.1'
end
