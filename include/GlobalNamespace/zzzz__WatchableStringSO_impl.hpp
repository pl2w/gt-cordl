#pragma once
// IWYU pragma private; include "GlobalNamespace/WatchableStringSO.hpp"
#include "GlobalNamespace/zzzz__EnterPlayID_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__WatchableStringSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.get__value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::WatchableStringSO::*)()>(&::GlobalNamespace::WatchableStringSO::get__value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b58e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"get__value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.set__value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)(::StringW)>(&::GlobalNamespace::WatchableStringSO::set__value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b58e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"set__value", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::WatchableStringSO::*)()>(&::GlobalNamespace::WatchableStringSO::get_Value)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56b58f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)(::StringW)>(&::GlobalNamespace::WatchableStringSO::set_Value)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56b59e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"set_Value", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)()>(&::GlobalNamespace::WatchableStringSO::EnsureInitialized)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56b5908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)(::System::Action_1<::StringW>*, bool)>(&::GlobalNamespace::WatchableStringSO::AddCallback)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x56b5b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.RemoveCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::WatchableStringSO::RemoveCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56b5d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::WatchableStringSO::*)()>(&::GlobalNamespace::WatchableStringSO::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56b5d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                    {::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WatchableStringSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WatchableStringSO::*)()>(&::GlobalNamespace::WatchableStringSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b5da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::WatchableStringSO::__cordl_internal_get_InitialValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialValue;
}
constexpr ::StringW const& GlobalNamespace::WatchableStringSO::__cordl_internal_get_InitialValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialValue;
}
constexpr void GlobalNamespace::WatchableStringSO::__cordl_internal_set_InitialValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialValue = value;
}
constexpr ::StringW& GlobalNamespace::WatchableStringSO::__cordl_internal_get___value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____value_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::WatchableStringSO::__cordl_internal_get___value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____value_k__BackingField;
}
constexpr void GlobalNamespace::WatchableStringSO::__cordl_internal_set___value_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____value_k__BackingField = value;
}
constexpr ::GlobalNamespace::EnterPlayID& GlobalNamespace::WatchableStringSO::__cordl_internal_get_enterPlayID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPlayID;
}
constexpr ::GlobalNamespace::EnterPlayID const& GlobalNamespace::WatchableStringSO::__cordl_internal_get_enterPlayID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPlayID;
}
constexpr void GlobalNamespace::WatchableStringSO::__cordl_internal_set_enterPlayID(::GlobalNamespace::EnterPlayID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterPlayID = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*& GlobalNamespace::WatchableStringSO::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>* const& GlobalNamespace::WatchableStringSO::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr void GlobalNamespace::WatchableStringSO::__cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
inline ::StringW GlobalNamespace::WatchableStringSO::get__value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"get__value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::WatchableStringSO::set__value(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"set__value", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::WatchableStringSO::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::WatchableStringSO::set_Value(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"set_Value", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WatchableStringSO::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WatchableStringSO::AddCallback(::System::Action_1<::StringW>*  callback, bool  shouldCallbackNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, shouldCallbackNow);
}
inline void GlobalNamespace::WatchableStringSO::RemoveCallback(::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::StringW GlobalNamespace::WatchableStringSO::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::WatchableStringSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableStringSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WatchableStringSO* GlobalNamespace::WatchableStringSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WatchableStringSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WatchableStringSO::WatchableStringSO()   {
}
