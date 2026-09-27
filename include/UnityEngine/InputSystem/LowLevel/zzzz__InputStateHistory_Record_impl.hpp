#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_Record.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_Record_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_RecordHeader* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_header)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaffd328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_recordIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_recordIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaffd348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_recordIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffd354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_valid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaffd35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffd3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_index)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaffd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_time)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaffd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_control)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaffd4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_control", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_next)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaffd56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.get_previous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::get_previous)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaffd608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_previous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateHistory_Record::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory*, int32_t, ::GlobalNamespace::InputStateHistory_RecordHeader*)>(&::GlobalNamespace::InputStateHistory_Record::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaffb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.ReadValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaffd69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"ReadValueAsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.GetUnsafeMemoryPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::GetUnsafeMemoryPtr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaffd6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeMemoryPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.GetUnsafeMemoryPtrUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::GetUnsafeMemoryPtrUnchecked)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaffd6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeMemoryPtrUnchecked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.GetUnsafeExtraMemoryPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::GetUnsafeExtraMemoryPtr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaffd76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeExtraMemoryPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.GetUnsafeExtraMemoryPtrUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::GetUnsafeExtraMemoryPtrUnchecked)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaffd784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeExtraMemoryPtrUnchecked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateHistory_Record::*)(::GlobalNamespace::InputStateHistory_Record)>(&::GlobalNamespace::InputStateHistory_Record::CopyFrom)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xaffbb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"CopyFrom", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.CheckValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::CheckValid)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaffd3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"CheckValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputStateHistory_Record::*)(::GlobalNamespace::InputStateHistory_Record)>(&::GlobalNamespace::InputStateHistory_Record::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaffd854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputStateHistory_Record::*)(::System::Object*)>(&::GlobalNamespace::InputStateHistory_Record::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaffd888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                    {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaffd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                    {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_Record.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InputStateHistory_Record::*)()>(&::GlobalNamespace::InputStateHistory_Record::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaffd968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                    {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputStateHistory_RecordHeader* GlobalNamespace::InputStateHistory_Record::get_header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_RecordHeader*>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::InputStateHistory_Record::get_recordIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_recordIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::InputStateHistory_Record::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputStateHistory_Record::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* GlobalNamespace::InputStateHistory_Record::get_owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::InputStateHistory_Record::get_index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t GlobalNamespace::InputStateHistory_Record::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* GlobalNamespace::InputStateHistory_Record::get_control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputStateHistory_Record GlobalNamespace::InputStateHistory_Record::get_next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputStateHistory_Record GlobalNamespace::InputStateHistory_Record::get_previous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"get_previous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(*this, ___internal_method);
}
inline void GlobalNamespace::InputStateHistory_Record::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  owner, int32_t  index, ::GlobalNamespace::InputStateHistory_RecordHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner, index, header);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue GlobalNamespace::InputStateHistory_Record::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                    {"ReadValue", {::i2c::class_of<TValue>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::InputStateHistory_Record::ReadValueAsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"ReadValueAsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void* GlobalNamespace::InputStateHistory_Record::GetUnsafeMemoryPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeMemoryPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* GlobalNamespace::InputStateHistory_Record::GetUnsafeMemoryPtrUnchecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeMemoryPtrUnchecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* GlobalNamespace::InputStateHistory_Record::GetUnsafeExtraMemoryPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeExtraMemoryPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* GlobalNamespace::InputStateHistory_Record::GetUnsafeExtraMemoryPtrUnchecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"GetUnsafeExtraMemoryPtrUnchecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void GlobalNamespace::InputStateHistory_Record::CopyFrom(::GlobalNamespace::InputStateHistory_Record  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"CopyFrom", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, record);
}
inline void GlobalNamespace::InputStateHistory_Record::CheckValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"CheckValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputStateHistory_Record::Equals(::GlobalNamespace::InputStateHistory_Record  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::InputStateHistory_Record::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::InputStateHistory_Record::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::InputStateHistory_Record::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_Record>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr  GlobalNamespace::InputStateHistory_Record::operator ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>* GlobalNamespace::InputStateHistory_Record::i___System__IEquatable_1___GlobalNamespace__InputStateHistory_Record_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputStateHistory_Record::InputStateHistory_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  m_Owner, int32_t  m_IndexPlusOne, uint32_t  m_Version) noexcept  {
this->m_Owner = m_Owner;
this->m_IndexPlusOne = m_IndexPlusOne;
this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputStateHistory_Record::InputStateHistory_Record()   {
}
