#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults_FortuneResult.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneResult_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FortuneResults_FortuneResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneResults_FortuneResult::*)(::GlobalNamespace::FortuneResults_FortuneCategoryType, int32_t)>(&::GlobalNamespace::FortuneResults_FortuneResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults_FortuneResult>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneCategoryType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FortuneResults_FortuneResult::_ctor(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, int32_t  resultIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults_FortuneResult>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneCategoryType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fortuneType, resultIndex);
}
// Ctor Parameters [CppParam { name: "fortuneType", ty: "::GlobalNamespace::FortuneResults_FortuneCategoryType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resultIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FortuneResults_FortuneResult::FortuneResults_FortuneResult(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, int32_t  resultIndex) noexcept  {
this->fortuneType = fortuneType;
this->resultIndex = resultIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneResults_FortuneResult::FortuneResults_FortuneResult()   {
}
