#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourseData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData.get_ObstacleCourseCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_ObstacleCourseCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c18bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_ObstacleCourseCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData.set_ObstacleCourseCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::*)(int32_t)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::set_ObstacleCourseCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c18bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"set_ObstacleCourseCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData.get_WinnerActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_WinnerActorNumber)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c18564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_WinnerActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData.get_CurrentRaceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_CurrentRaceState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c18644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_CurrentRaceState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c1819c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__ObstacleCourseCount_k__BackingField()  {
return this->____ObstacleCourseCount_k__BackingField;
}
constexpr int32_t const& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__ObstacleCourseCount_k__BackingField() const {
return this->____ObstacleCourseCount_k__BackingField;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_set__ObstacleCourseCount_k__BackingField(int32_t  value)  {
this->____ObstacleCourseCount_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@4& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__WinnerActorNumber()  {
return this->____WinnerActorNumber;
}
constexpr ::Fusion::CodeGen::FixedStorage@4 const& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__WinnerActorNumber() const {
return this->____WinnerActorNumber;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_set__WinnerActorNumber(::Fusion::CodeGen::FixedStorage@4  value)  {
this->____WinnerActorNumber = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@4& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__CurrentRaceState()  {
return this->____CurrentRaceState;
}
constexpr ::Fusion::CodeGen::FixedStorage@4 const& GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_get__CurrentRaceState() const {
return this->____CurrentRaceState;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseData::__cordl_internal_set__CurrentRaceState(::Fusion::CodeGen::FixedStorage@4  value)  {
this->____CurrentRaceState = value;
}
inline int32_t GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_ObstacleCourseCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_ObstacleCourseCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseData::set_ObstacleCourseCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"set_ObstacleCourseCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkArray_1<int32_t> GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_WinnerActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_WinnerActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<int32_t> GorillaTagScripts::ObstacleCourse::ObstacleCourseData::get_CurrentRaceState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {"get_CurrentRaceState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseData::_ctor(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  courses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, courses);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GorillaTagScripts::ObstacleCourse::ObstacleCourseData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GorillaTagScripts::ObstacleCourse::ObstacleCourseData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ObstacleCourseCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WinnerActorNumber", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentRaceState", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::ObstacleCourseData(int32_t  _ObstacleCourseCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@4  _WinnerActorNumber, ::Fusion::CodeGen::FixedStorage@4  _CurrentRaceState) noexcept  {
this->_ObstacleCourseCount_k__BackingField = _ObstacleCourseCount_k__BackingField;
this->_WinnerActorNumber = _WinnerActorNumber;
this->_CurrentRaceState = _CurrentRaceState;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData::ObstacleCourseData()   {
}
