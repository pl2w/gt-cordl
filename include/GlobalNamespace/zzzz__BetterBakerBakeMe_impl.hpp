#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerBakeMe.hpp"
#include "GlobalNamespace/zzzz__FlagForBaking_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__BetterBakerBakeMe_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_ShaderConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterBakerBakeMe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterBakerBakeMe::*)()>(&::GlobalNamespace::BetterBakerBakeMe::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ae1d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerBakeMe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_stuffIncludingParentsToBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuffIncludingParentsToBake;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_stuffIncludingParentsToBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stuffIncludingParentsToBake;
}
constexpr void GlobalNamespace::BetterBakerBakeMe::__cordl_internal_set_stuffIncludingParentsToBake(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stuffIncludingParentsToBake = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_getMatStuffFromHere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMatStuffFromHere;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_getMatStuffFromHere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMatStuffFromHere;
}
constexpr void GlobalNamespace::BetterBakerBakeMe::__cordl_internal_set_getMatStuffFromHere(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getMatStuffFromHere = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_allConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allConfigs;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>* const& GlobalNamespace::BetterBakerBakeMe::__cordl_internal_get_allConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allConfigs;
}
constexpr void GlobalNamespace::BetterBakerBakeMe::__cordl_internal_set_allConfigs(::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allConfigs = value;
}
inline void GlobalNamespace::BetterBakerBakeMe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerBakeMe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterBakerBakeMe* GlobalNamespace::BetterBakerBakeMe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterBakerBakeMe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterBakerBakeMe::BetterBakerBakeMe()   {
}
