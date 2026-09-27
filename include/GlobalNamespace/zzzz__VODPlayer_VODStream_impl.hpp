#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStream.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamType_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODStream.get_displayTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VODPlayer_VODStream::*)()>(&::GlobalNamespace::VODPlayer_VODStream::get_displayTitle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d049b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODStream>(),
                        {"get_displayTitle", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::VODPlayer_VODStream::get_displayTitle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODStream>(),
                        {"get_displayTitle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hideUpNext", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "duration", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ch", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer_VODStream::VODPlayer_VODStream(::StringW  name, bool  hideUpNext, ::StringW  id, ::StringW  url, ::GlobalNamespace::VODStream_VODPlayer_VODStreamType  type, int32_t  duration, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch) noexcept  {
this->name = name;
this->hideUpNext = hideUpNext;
this->id = id;
this->url = url;
this->type = type;
this->duration = duration;
this->ch = ch;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer_VODStream::VODPlayer_VODStream()   {
}
