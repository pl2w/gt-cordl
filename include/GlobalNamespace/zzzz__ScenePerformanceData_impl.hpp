#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenePerformanceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScenePerformanceData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScenePerformanceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenePerformanceData::*)(::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Collections::Generic::List_1<int32_t>*)>(&::GlobalNamespace::ScenePerformanceData::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56bc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePerformanceData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__mapName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapName;
}
constexpr ::StringW const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__mapName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapName;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__mapName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapName = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__gorillaCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gorillaCount;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__gorillaCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gorillaCount;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__gorillaCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gorillaCount = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__droppedFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedFrames;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__droppedFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedFrames;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__droppedFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droppedFrames = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__msHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msHigh;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__msHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msHigh;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__msHigh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____msHigh = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianMS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianMS;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianMS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianMS;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__medianMS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____medianMS = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianFPS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianFPS;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianFPS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianFPS;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__medianFPS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____medianFPS = value;
}
constexpr int32_t& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianDrawCallCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianDrawCallCount;
}
constexpr int32_t const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__medianDrawCallCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medianDrawCallCount;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__medianDrawCallCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____medianDrawCallCount = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__msCaptures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msCaptures;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ScenePerformanceData::__cordl_internal_get__msCaptures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msCaptures;
}
constexpr void GlobalNamespace::ScenePerformanceData::__cordl_internal_set__msCaptures(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____msCaptures = value;
}
inline void GlobalNamespace::ScenePerformanceData::_ctor(::StringW  mapName, int32_t  gorillaCount, int32_t  droppedFrames, int32_t  msHigh, int32_t  medianMS, int32_t  medianFPS, int32_t  medianDrawCalls, ::System::Collections::Generic::List_1<int32_t>*  msCaptures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePerformanceData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapName, gorillaCount, droppedFrames, msHigh, medianMS, medianFPS, medianDrawCalls, msCaptures);
}
inline ::GlobalNamespace::ScenePerformanceData* GlobalNamespace::ScenePerformanceData::New_ctor(::StringW  mapName, int32_t  gorillaCount, int32_t  droppedFrames, int32_t  msHigh, int32_t  medianMS, int32_t  medianFPS, int32_t  medianDrawCalls, ::System::Collections::Generic::List_1<int32_t>*  msCaptures)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenePerformanceData*>(mapName, gorillaCount, droppedFrames, msHigh, medianMS, medianFPS, medianDrawCalls, msCaptures));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScenePerformanceData::ScenePerformanceData()   {
}
