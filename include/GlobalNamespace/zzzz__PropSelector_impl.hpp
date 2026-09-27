#pragma once
// IWYU pragma private; include "GlobalNamespace/PropSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropSelector_def.hpp"
#include "GlobalNamespace/zzzz__PropSelector_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropSelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropSelector::*)()>(&::GlobalNamespace::PropSelector::Start)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x563fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropSelector::*)()>(&::GlobalNamespace::PropSelector::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5640160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PropSelector::__cordl_internal_get__props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PropSelector::__cordl_internal_get__props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr void GlobalNamespace::PropSelector::__cordl_internal_set__props(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____props = value;
}
constexpr int32_t& GlobalNamespace::PropSelector::__cordl_internal_get__desiredActivePropsNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredActivePropsNum;
}
constexpr int32_t const& GlobalNamespace::PropSelector::__cordl_internal_get__desiredActivePropsNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredActivePropsNum;
}
constexpr void GlobalNamespace::PropSelector::__cordl_internal_set__desiredActivePropsNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____desiredActivePropsNum = value;
}
inline void GlobalNamespace::PropSelector::setStaticF__gRandom(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "_gRandom", ::GlobalNamespace::PropSelector*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* GlobalNamespace::PropSelector::getStaticF__gRandom()  {
return ::cordl_internals::getStaticField<::System::Random*, "_gRandom", ::GlobalNamespace::PropSelector*>();
}
inline void GlobalNamespace::PropSelector::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropSelector* GlobalNamespace::PropSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropSelector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropSelector::PropSelector()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropSelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropSelector___c::*)()>(&::GlobalNamespace::PropSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56402d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropSelector___c._Start_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PropSelector___c::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::PropSelector___c::_Start_b__3_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56402dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector___c*>(),
                        {"<Start>b__3_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropSelector___c::setStaticF___9(::GlobalNamespace::PropSelector___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PropSelector___c*, "<>9", ::GlobalNamespace::PropSelector___c*>(std::forward<::GlobalNamespace::PropSelector___c*>(value));
}
inline ::GlobalNamespace::PropSelector___c* GlobalNamespace::PropSelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PropSelector___c*, "<>9", ::GlobalNamespace::PropSelector___c*>();
}
inline void GlobalNamespace::PropSelector___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "<>9__3_0", ::GlobalNamespace::PropSelector___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>* GlobalNamespace::PropSelector___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "<>9__3_0", ::GlobalNamespace::PropSelector___c*>();
}
inline void GlobalNamespace::PropSelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PropSelector___c::_Start_b__3_0(::UnityEngine::GameObject*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSelector___c*>(),
                        {"<Start>b__3_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::GlobalNamespace::PropSelector___c* GlobalNamespace::PropSelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropSelector___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropSelector___c::PropSelector___c()   {
}
