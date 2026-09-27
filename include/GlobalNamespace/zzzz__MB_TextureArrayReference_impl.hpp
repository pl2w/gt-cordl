#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayReference_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureArrayReference::*)(::StringW, ::UnityEngine::Texture2DArray*)>(&::GlobalNamespace::MB_TextureArrayReference::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d728f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayReference*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MB_TextureArrayReference::__cordl_internal_get_texFromatSetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texFromatSetName;
}
constexpr ::StringW const& GlobalNamespace::MB_TextureArrayReference::__cordl_internal_get_texFromatSetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texFromatSetName;
}
constexpr void GlobalNamespace::MB_TextureArrayReference::__cordl_internal_set_texFromatSetName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texFromatSetName = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& GlobalNamespace::MB_TextureArrayReference::__cordl_internal_get_texArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& GlobalNamespace::MB_TextureArrayReference::__cordl_internal_get_texArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texArray;
}
constexpr void GlobalNamespace::MB_TextureArrayReference::__cordl_internal_set_texArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texArray = value;
}
inline void GlobalNamespace::MB_TextureArrayReference::_ctor(::StringW  formatSetName, ::UnityEngine::Texture2DArray*  ta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayReference*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatSetName, ta);
}
inline ::GlobalNamespace::MB_TextureArrayReference* GlobalNamespace::MB_TextureArrayReference::New_ctor(::StringW  formatSetName, ::UnityEngine::Texture2DArray*  ta)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TextureArrayReference*>(formatSetName, ta));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TextureArrayReference::MB_TextureArrayReference()   {
}
