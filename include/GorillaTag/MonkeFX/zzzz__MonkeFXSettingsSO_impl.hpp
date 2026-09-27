#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFXSettingsSO.hpp"
#include "GorillaTag/zzzz__GTDirectAssetRef_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFXSettingsSO_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFXSettingsSO.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFXSettingsSO::*)()>(&::GorillaTag::MonkeFX::MonkeFXSettingsSO::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d43da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFXSettingsSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFXSettingsSO::*)()>(&::GorillaTag::MonkeFX::MonkeFXSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>& GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_get_sourceMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshes;
}
constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>> const& GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_get_sourceMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshes;
}
constexpr void GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_set_sourceMeshes(::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMeshes = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_get_combinedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_get_combinedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMesh;
}
constexpr void GorillaTag::MonkeFX::MonkeFXSettingsSO::__cordl_internal_set_combinedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMesh = value;
}
inline void GorillaTag::MonkeFX::MonkeFXSettingsSO::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFXSettingsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::MonkeFX::MonkeFXSettingsSO* GorillaTag::MonkeFX::MonkeFXSettingsSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::MonkeFX::MonkeFXSettingsSO::MonkeFXSettingsSO()   {
}
