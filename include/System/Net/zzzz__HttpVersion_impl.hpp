#pragma once
// IWYU pragma private; include "System/Net/HttpVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpVersion_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpVersion::*)()>(&::System::Net::HttpVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpVersion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::HttpVersion::setStaticF_Unknown(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Unknown", ::System::Net::HttpVersion*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* System::Net::HttpVersion::getStaticF_Unknown()  {
return ::cordl_internals::getStaticField<::System::Version*, "Unknown", ::System::Net::HttpVersion*>();
}
inline void System::Net::HttpVersion::setStaticF_Version10(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Version10", ::System::Net::HttpVersion*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* System::Net::HttpVersion::getStaticF_Version10()  {
return ::cordl_internals::getStaticField<::System::Version*, "Version10", ::System::Net::HttpVersion*>();
}
inline void System::Net::HttpVersion::setStaticF_Version11(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Version11", ::System::Net::HttpVersion*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* System::Net::HttpVersion::getStaticF_Version11()  {
return ::cordl_internals::getStaticField<::System::Version*, "Version11", ::System::Net::HttpVersion*>();
}
inline void System::Net::HttpVersion::setStaticF_Version20(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Version20", ::System::Net::HttpVersion*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* System::Net::HttpVersion::getStaticF_Version20()  {
return ::cordl_internals::getStaticField<::System::Version*, "Version20", ::System::Net::HttpVersion*>();
}
inline void System::Net::HttpVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpVersion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpVersion* System::Net::HttpVersion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpVersion*>());
}
// Ctor Parameters []
constexpr ::System::Net::HttpVersion::HttpVersion()   {
}
