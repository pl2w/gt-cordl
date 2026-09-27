#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreUpdateEvent.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreUpdateEvent_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreUpdateEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdateEvent::*)()>(&::GorillaNetworking::Store::StoreUpdateEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb3378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdateEvent::*)(::StringW, ::StringW, ::System::DateTime, ::System::DateTime)>(&::GorillaNetworking::Store::StoreUpdateEvent::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cb3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent.SerializeAsJSon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaNetworking::Store::StoreUpdateEvent*)>(&::GorillaNetworking::Store::StoreUpdateEvent::SerializeAsJSon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb33dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"SerializeAsJSon", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent.SerializeArrayAsJSon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>)>(&::GorillaNetworking::Store::StoreUpdateEvent::SerializeArrayAsJSon)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb33e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"SerializeArrayAsJSon", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent.DeserializeFromJSon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::Store::StoreUpdateEvent* (*)(::StringW)>(&::GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSon)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cb343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSon", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent.DeserializeFromJSonArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*> (*)(::StringW)>(&::GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSonArray)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5cb3484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSonArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent.DeserializeFromJSonList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* (*)(::StringW)>(&::GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSonList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cb35f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSonList", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_PedestalID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PedestalID;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_PedestalID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PedestalID;
}
constexpr void GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_set_PedestalID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PedestalID = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_ItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_ItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemName;
}
constexpr void GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_set_ItemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemName = value;
}
constexpr ::System::DateTime& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_StartTimeUTC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTimeUTC;
}
constexpr ::System::DateTime const& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_StartTimeUTC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTimeUTC;
}
constexpr void GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_set_StartTimeUTC(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartTimeUTC = value;
}
constexpr ::System::DateTime& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_EndTimeUTC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndTimeUTC;
}
constexpr ::System::DateTime const& GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_get_EndTimeUTC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndTimeUTC;
}
constexpr void GorillaNetworking::Store::StoreUpdateEvent::__cordl_internal_set_EndTimeUTC(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EndTimeUTC = value;
}
inline void GorillaNetworking::Store::StoreUpdateEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdateEvent::_ctor(::StringW  pedestalID, ::StringW  itemName, ::System::DateTime  startTimeUTC, ::System::DateTime  endTimeUTC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pedestalID, itemName, startTimeUTC, endTimeUTC);
}
inline ::StringW GorillaNetworking::Store::StoreUpdateEvent::SerializeAsJSon(::GorillaNetworking::Store::StoreUpdateEvent*  storeEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"SerializeAsJSon", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, storeEvent);
}
inline ::StringW GorillaNetworking::Store::StoreUpdateEvent::SerializeArrayAsJSon(::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>  storeEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"SerializeArrayAsJSon", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, storeEvents);
}
inline ::GorillaNetworking::Store::StoreUpdateEvent* GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSon(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSon", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::Store::StoreUpdateEvent*>(nullptr, ___internal_method, json);
}
inline ::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*> GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSonArray(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSonArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>>(nullptr, ___internal_method, json);
}
inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* GorillaNetworking::Store::StoreUpdateEvent::DeserializeFromJSonList(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent*>(),
                        {"DeserializeFromJSonList", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>(nullptr, ___internal_method, json);
}
inline ::GorillaNetworking::Store::StoreUpdateEvent* GorillaNetworking::Store::StoreUpdateEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdateEvent*>());
}
inline ::GorillaNetworking::Store::StoreUpdateEvent* GorillaNetworking::Store::StoreUpdateEvent::New_ctor(::StringW  pedestalID, ::StringW  itemName, ::System::DateTime  startTimeUTC, ::System::DateTime  endTimeUTC)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdateEvent*>(pedestalID, itemName, startTimeUTC, endTimeUTC));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdateEvent::StoreUpdateEvent()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdateEvent___c::*)()>(&::GorillaNetworking::Store::StoreUpdateEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb37b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent___c._DeserializeFromJSonArray_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::Store::StoreUpdateEvent___c::*)(::GorillaNetworking::Store::StoreUpdateEvent*, ::GorillaNetworking::Store::StoreUpdateEvent*)>(&::GorillaNetworking::Store::StoreUpdateEvent___c::_DeserializeFromJSonArray_b__9_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb37bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {"<DeserializeFromJSonArray>b__9_0", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdateEvent___c._DeserializeFromJSonList_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::Store::StoreUpdateEvent___c::*)(::GorillaNetworking::Store::StoreUpdateEvent*, ::GorillaNetworking::Store::StoreUpdateEvent*)>(&::GorillaNetworking::Store::StoreUpdateEvent___c::_DeserializeFromJSonList_b__10_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb382c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {"<DeserializeFromJSonList>b__10_0", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::Store::StoreUpdateEvent___c::setStaticF___9(::GorillaNetworking::Store::StoreUpdateEvent___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::Store::StoreUpdateEvent___c*, "<>9", ::GorillaNetworking::Store::StoreUpdateEvent___c*>(std::forward<::GorillaNetworking::Store::StoreUpdateEvent___c*>(value));
}
inline ::GorillaNetworking::Store::StoreUpdateEvent___c* GorillaNetworking::Store::StoreUpdateEvent___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::Store::StoreUpdateEvent___c*, "<>9", ::GorillaNetworking::Store::StoreUpdateEvent___c*>();
}
inline void GorillaNetworking::Store::StoreUpdateEvent___c::setStaticF___9__9_0(::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*, "<>9__9_0", ::GorillaNetworking::Store::StoreUpdateEvent___c*>(std::forward<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>(value));
}
inline ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>* GorillaNetworking::Store::StoreUpdateEvent___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*, "<>9__9_0", ::GorillaNetworking::Store::StoreUpdateEvent___c*>();
}
inline void GorillaNetworking::Store::StoreUpdateEvent___c::setStaticF___9__10_0(::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*, "<>9__10_0", ::GorillaNetworking::Store::StoreUpdateEvent___c*>(std::forward<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>(value));
}
inline ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>* GorillaNetworking::Store::StoreUpdateEvent___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*, "<>9__10_0", ::GorillaNetworking::Store::StoreUpdateEvent___c*>();
}
inline void GorillaNetworking::Store::StoreUpdateEvent___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaNetworking::Store::StoreUpdateEvent___c::_DeserializeFromJSonArray_b__9_0(::GorillaNetworking::Store::StoreUpdateEvent*  x, ::GorillaNetworking::Store::StoreUpdateEvent*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {"<DeserializeFromJSonArray>b__9_0", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t GorillaNetworking::Store::StoreUpdateEvent___c::_DeserializeFromJSonList_b__10_0(::GorillaNetworking::Store::StoreUpdateEvent*  x, ::GorillaNetworking::Store::StoreUpdateEvent*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdateEvent___c*>(),
                        {"<DeserializeFromJSonList>b__10_0", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GorillaNetworking::Store::StoreUpdateEvent___c* GorillaNetworking::Store::StoreUpdateEvent___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdateEvent___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdateEvent___c::StoreUpdateEvent___c()   {
}
