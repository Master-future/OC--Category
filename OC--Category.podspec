

Pod::Spec.new do |s|
  s.name         = "OC--Category"
  s.version      = "0.0.1"
  s.summary      = "OC--Category."

  s.description  = <<-DESC
                      this project provide all kinds of categories for iOS developer
                   DESC

  s.homepage     = "https://github.com/Master-future/OC--Category.git"
  s.license      = "MIT"

  s.author             = { "未来先生" => "807749729@qq.com" }
  
  s.platform     = :ios

  s.source       = { :git => "https://github.com/Master-future/OC--Category.git", :tag => "#{s.version}" }



  s.source_files  = "Classes", "常用分类/常用分类/*.{h,m}"
  s.exclude_files = "Classes/Exclude"

  s.public_header_files = "常用分类/常用分类/*.h"


  s.requires_arc = true


end
