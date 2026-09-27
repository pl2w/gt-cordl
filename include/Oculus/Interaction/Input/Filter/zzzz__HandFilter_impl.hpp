#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Filter/HandFilter.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Input/Filter/zzzz__HandFilter_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFilterParameterBlock_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Filter::HandFilter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Filter::HandFilter::*)()>(&::Oculus::Interaction::Input::Filter::HandFilter::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa517d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Filter::HandFilter.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Filter::HandFilter::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::Filter::HandFilter::Apply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa517df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Filter::HandFilter.UpdateFilterParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Filter::HandFilter::*)()>(&::Oculus::Interaction::Input::Filter::HandFilter::UpdateFilterParameters)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa517e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {"UpdateFilterParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Filter::HandFilter.UpdateHandData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Filter::HandFilter::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::Filter::HandFilter::UpdateHandData)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xa518064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {"UpdateHandData", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Filter::HandFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Filter::HandFilter::*)()>(&::Oculus::Interaction::Input::Filter::HandFilter::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa51858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__filterParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterParameters;
}
constexpr ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock> const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__filterParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterParameters;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__filterParameters(::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterParameters = value;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__rootRotFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotFilter;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__rootRotFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotFilter;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__rootRotFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootRotFilter = value;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__rootPosFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosFilter;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__rootPosFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosFilter;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__rootPosFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPosFilter = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__jointPosFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosFilter;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*> const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__jointPosFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosFilter;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__jointPosFilter(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPosFilter = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__jointRotFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointRotFilter;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*> const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__jointRotFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointRotFilter;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__jointRotFilter(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointRotFilter = value;
}
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__shadowHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_get__shadowHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr void Oculus::Interaction::Input::Filter::HandFilter::__cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shadowHand = value;
}
inline void Oculus::Interaction::Input::Filter::HandFilter::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Filter::HandFilter::Apply(::Oculus::Interaction::Input::HandDataAsset*  handDataAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handDataAsset);
}
inline bool Oculus::Interaction::Input::Filter::HandFilter::UpdateFilterParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {"UpdateFilterParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Filter::HandFilter::UpdateHandData(::Oculus::Interaction::Input::HandDataAsset*  handDataAsset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {"UpdateHandData", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handDataAsset);
}
inline void Oculus::Interaction::Input::Filter::HandFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Filter::HandFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Filter::HandFilter* Oculus::Interaction::Input::Filter::HandFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Filter::HandFilter*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Filter::HandFilter::HandFilter()   {
}
