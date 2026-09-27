#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayFormat.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormat_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureArrayFormat::*)()>(&::GlobalNamespace::MB_TextureArrayFormat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d72aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
constexpr ::UnityEngine::TextureFormat& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::UnityEngine::TextureFormat const& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_set_format(::UnityEngine::TextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_compressionQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQuality;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality const& GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_get_compressionQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQuality;
}
constexpr void GlobalNamespace::MB_TextureArrayFormat::__cordl_internal_set_compressionQuality(::DigitalOpus::MB::Core::MB_TextureCompressionQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionQuality = value;
}
inline void GlobalNamespace::MB_TextureArrayFormat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TextureArrayFormat* GlobalNamespace::MB_TextureArrayFormat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TextureArrayFormat*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TextureArrayFormat::MB_TextureArrayFormat()   {
}
