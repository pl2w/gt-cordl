#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeMaterialCombinerTargetMono.hpp"
#include "GlobalNamespace/zzzz__GTSerializableDict_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeMaterialCombinerTargetMono_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RuntimeMaterialCombinerTargetMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeMaterialCombinerTargetMono::*)()>(&::GlobalNamespace::RuntimeMaterialCombinerTargetMono::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x569aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeMaterialCombinerTargetMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeMaterialCombinerTargetMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeMaterialCombinerTargetMono::*)()>(&::GlobalNamespace::RuntimeMaterialCombinerTargetMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x569aa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeMaterialCombinerTargetMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>& GlobalNamespace::RuntimeMaterialCombinerTargetMono::__cordl_internal_get_m_matSlot_to_texProp_to_texGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_matSlot_to_texProp_to_texGuid;
}
constexpr ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*> const& GlobalNamespace::RuntimeMaterialCombinerTargetMono::__cordl_internal_get_m_matSlot_to_texProp_to_texGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_matSlot_to_texProp_to_texGuid;
}
constexpr void GlobalNamespace::RuntimeMaterialCombinerTargetMono::__cordl_internal_set_m_matSlot_to_texProp_to_texGuid(::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_matSlot_to_texProp_to_texGuid = value;
}
inline void GlobalNamespace::RuntimeMaterialCombinerTargetMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeMaterialCombinerTargetMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeMaterialCombinerTargetMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeMaterialCombinerTargetMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RuntimeMaterialCombinerTargetMono* GlobalNamespace::RuntimeMaterialCombinerTargetMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RuntimeMaterialCombinerTargetMono*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeMaterialCombinerTargetMono::RuntimeMaterialCombinerTargetMono()   {
}
