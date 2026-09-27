#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyArray.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::ContinuousPropertyArray::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyArray::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d7f1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyArray::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyArray::InitIfNeeded)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5d84ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray.ApplyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyArray::*)(bool, float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyArray::ApplyAll)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d85310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"ApplyAll", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray.ApplyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyArray::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyArray::ApplyAll)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5d7f7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"ApplyAll", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyArray::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyArray::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d85314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_maxExpectedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExpectedValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_maxExpectedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExpectedValue;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_maxExpectedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxExpectedValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_inverseMaximum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMaximum;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_inverseMaximum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMaximum;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_inverseMaximum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseMaximum = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_responsiveness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responsiveness;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_responsiveness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responsiveness;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_responsiveness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responsiveness = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_instant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instant;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_instant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instant;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_instant(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instant = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*> const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_list(::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_uniqueShaderPropertyIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueShaderPropertyIndices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_uniqueShaderPropertyIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueShaderPropertyIndices;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_uniqueShaderPropertyIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueShaderPropertyIndices = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_mpb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mpb;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_mpb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mpb;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_mpb(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mpb = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_lastApplyTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastApplyTime;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_lastApplyTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastApplyTime;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_lastApplyTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastApplyTime = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_cachedRigIsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRigIsLocal;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_get_cachedRigIsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRigIsLocal;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyArray::__cordl_internal_set_cachedRigIsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedRigIsLocal = value;
}
inline int32_t GorillaTag::Cosmetics::ContinuousPropertyArray::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyArray::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyArray::ApplyAll(bool  leftHand, float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"ApplyAll", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, f);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyArray::ApplyAll(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {"ApplyAll", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyArray* GorillaTag::Cosmetics::ContinuousPropertyArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousPropertyArray*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray::ContinuousPropertyArray()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::*)(::GorillaTag::Cosmetics::ContinuousProperty*, ::GorillaTag::Cosmetics::ContinuousProperty*)>(&::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::Compare)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d85244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GorillaTag::Cosmetics::ContinuousProperty*>(), ::i2c::type_of<::GorillaTag::Cosmetics::ContinuousProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::Compare(::GorillaTag::Cosmetics::ContinuousProperty*  x, ::GorillaTag::Cosmetics::ContinuousProperty*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GorillaTag::Cosmetics::ContinuousProperty*>(), ::i2c::type_of<::GorillaTag::Cosmetics::ContinuousProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer* GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>"
constexpr  GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::operator ::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>"
constexpr ::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>* GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::i___System__Collections__Generic__IComparer_1___GorillaTag__Cosmetics__ContinuousProperty__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer::ContinuousPropertyArray_PropertyComparer()   {
}
