#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategory_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategory_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FortuneResults.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneResults::*)()>(&::GlobalNamespace::FortuneResults::OnValidate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x580a54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneResults.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FortuneResults_FortuneResult (::GlobalNamespace::FortuneResults::*)()>(&::GlobalNamespace::FortuneResults::GetResult)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x580a5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneResults.GetResultText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FortuneResults::*)(::GlobalNamespace::FortuneResults_FortuneResult)>(&::GlobalNamespace::FortuneResults::GetResultText)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x580a658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"GetResultText", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneResults::*)()>(&::GlobalNamespace::FortuneResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580a720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>& GlobalNamespace::FortuneResults::__cordl_internal_get_fortuneResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fortuneResults;
}
constexpr ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory> const& GlobalNamespace::FortuneResults::__cordl_internal_get_fortuneResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fortuneResults;
}
constexpr void GlobalNamespace::FortuneResults::__cordl_internal_set_fortuneResults(::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fortuneResults = value;
}
constexpr float_t& GlobalNamespace::FortuneResults::__cordl_internal_get_totalChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalChance;
}
constexpr float_t const& GlobalNamespace::FortuneResults::__cordl_internal_get_totalChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalChance;
}
constexpr void GlobalNamespace::FortuneResults::__cordl_internal_set_totalChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalChance = value;
}
inline void GlobalNamespace::FortuneResults::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FortuneResults_FortuneResult GlobalNamespace::FortuneResults::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FortuneResults_FortuneResult>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FortuneResults::GetResultText(::GlobalNamespace::FortuneResults_FortuneResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {"GetResultText", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, result);
}
inline void GlobalNamespace::FortuneResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FortuneResults* GlobalNamespace::FortuneResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FortuneResults*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneResults::FortuneResults()   {
}
