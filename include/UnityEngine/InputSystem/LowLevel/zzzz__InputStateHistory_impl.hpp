#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_Enumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_Record_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffb43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffb444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_historyDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_historyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffb44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_historyDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_historyDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_historyDepth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaffb454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_historyDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_extraMemoryPerRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_extraMemoryPerRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffb51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_extraMemoryPerRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_extraMemoryPerRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_extraMemoryPerRecord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaffb524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_extraMemoryPerRecord", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_updateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_updateMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaffb5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_updateMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_updateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_updateMask)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaffb684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_updateMask", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_controls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_controls)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaffb74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_controls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Item)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaffb7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t, ::GlobalNamespace::InputStateHistory_Record)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_Item)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaffb9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_onRecordAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::GlobalNamespace::InputStateHistory_Record>* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onRecordAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_onRecordAdded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_onRecordAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onRecordAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffbe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_onRecordAdded", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_onShouldRecordStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onShouldRecordStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffbea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_onShouldRecordStateChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_onShouldRecordStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onShouldRecordStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffbea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_onShouldRecordStateChange", {}, {::i2c::type_of<::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaffbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::StringW)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaffbf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaffc0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaffc1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaffc254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaffc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.AddRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::GlobalNamespace::InputStateHistory_Record)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::AddRecord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaffc354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"AddRecord", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::StartRecording)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaffc4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::StopRecording)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaffc614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaffc764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordStateChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, void*, double_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xaffc91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordStateChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaffcbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaffcc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaffc2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Destroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaffcc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Allocate)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xaffcce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordIndexToUserIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordIndexToUserIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaffcfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordIndexToUserIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UserIndexToRecordIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::UserIndexToRecordIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaffb8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UserIndexToRecordIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecord)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaffb8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetRecord", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetRecordUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecordUnchecked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaffcfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetRecordUnchecked", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.AllocateRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::by_ref<int32_t>)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::AllocateRecord)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaffc3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"AllocateRecord", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.ReadValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::GlobalNamespace::InputStateHistory_RecordHeader*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValueAsObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaffd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaffd188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaffd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_bytesPerRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_bytesPerRecord)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaffcf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_bytesPerRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onRecordAdded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRecordAdded_k__BackingField;
}
constexpr ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>* const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onRecordAdded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRecordAdded_k__BackingField;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set__onRecordAdded_k__BackingField(::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRecordAdded_k__BackingField = value;
}
constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onShouldRecordStateChange_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShouldRecordStateChange_k__BackingField;
}
constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onShouldRecordStateChange_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onShouldRecordStateChange_k__BackingField;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set__onShouldRecordStateChange_k__BackingField(::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onShouldRecordStateChange_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_Controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_Controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controls = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ControlCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ControlCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_ControlCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecordBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecordBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_RecordBuffer(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecordBuffer = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_StateSizeInBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_StateSizeInBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateSizeInBytes;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_StateSizeInBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StateSizeInBytes = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecordCount;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecordCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_RecordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecordCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HistoryDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryDepth;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HistoryDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryDepth;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_HistoryDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HistoryDepth = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ExtraMemoryPerRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraMemoryPerRecord;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ExtraMemoryPerRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraMemoryPerRecord;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_ExtraMemoryPerRecord(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtraMemoryPerRecord = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HeadIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HeadIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_HeadIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HeadIndex = value;
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_CurrentVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentVersion;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_CurrentVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentVersion;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_CurrentVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentVersion = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_UpdateMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_UpdateMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateMask;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_UpdateMask(::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateMask = value;
}
constexpr bool& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_AddNewControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddNewControls;
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_AddNewControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddNewControls;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_AddNewControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddNewControls = value;
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_historyDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_historyDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_historyDepth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_historyDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_extraMemoryPerRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_extraMemoryPerRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_extraMemoryPerRecord(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_extraMemoryPerRecord", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputStateHistory::get_updateMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_updateMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_updateMask", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::LowLevel::InputStateHistory::get_controls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_controls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::GlobalNamespace::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_Item(int32_t  index, ::GlobalNamespace::InputStateHistory_Record  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>* UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onRecordAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_onRecordAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onRecordAdded(::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_onRecordAdded", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onShouldRecordStateChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_onShouldRecordStateChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onShouldRecordStateChange(::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"set_onShouldRecordStateChange", {}, {::i2c::type_of<::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(int32_t  maxStateSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxStateSizeInBytes);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*  controls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controls);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::AddRecord(::GlobalNamespace::InputStateHistory_Record  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"AddRecord", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_Record>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(this, ___internal_method, record);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordStateChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(this, ___internal_method, control, eventPtr);
}
inline ::GlobalNamespace::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordStateChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_Record>(this, ___internal_method, control, statePtr, time);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputStateHistory::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordIndexToUserIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"RecordIndexToUserIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::UserIndexToRecordIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UserIndexToRecordIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::GlobalNamespace::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecord(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetRecord", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecordUnchecked(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"GetRecordUnchecked", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::AllocateRecord(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"AllocateRecord", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValue(::GlobalNamespace::InputStateHistory_RecordHeader*  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                    {"ReadValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, data);
}
inline ::System::Object* UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValueAsObject(::GlobalNamespace::InputStateHistory_RecordHeader*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, data);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, int64_t  monitorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl*  control, double_t  time, int64_t  monitorIndex, int32_t  timerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_bytesPerRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                        {"get_bytesPerRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(int32_t  maxStateSizeInBytes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(maxStateSizeInBytes));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(path));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::UnityEngine::InputSystem::InputControl*  control)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(control));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*  controls)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(controls));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputStateHistory_Record_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory::InputStateHistory()   {
}
