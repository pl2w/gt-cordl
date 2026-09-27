#pragma once
// IWYU pragma private; include "GlobalNamespace/MatCombinerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MatCombinerUtils_def.hpp"
#include "GlobalNamespace/zzzz__UberShaderMatUsedProps_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatCombinerUtils.ApplyExtraFingerprintRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::UberShaderMatUsedProps>)>(&::GlobalNamespace::MatCombinerUtils::ApplyExtraFingerprintRules)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x56976c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatCombinerUtils*>(),
                        {"ApplyExtraFingerprintRules", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::UberShaderMatUsedProps>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatCombinerUtils.AverageMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::GlobalNamespace::MatCombinerUtils::AverageMaterials)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x56977d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatCombinerUtils*>(),
                        {"AverageMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MatCombinerUtils::ApplyExtraFingerprintRules(::by_ref<::GlobalNamespace::UberShaderMatUsedProps>  matUsedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatCombinerUtils*>(),
                        {"ApplyExtraFingerprintRules", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::UberShaderMatUsedProps>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matUsedProps);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MatCombinerUtils::AverageMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  oldMats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatCombinerUtils*>(),
                        {"AverageMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, oldMats);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatCombinerUtils::MatCombinerUtils()   {
}
