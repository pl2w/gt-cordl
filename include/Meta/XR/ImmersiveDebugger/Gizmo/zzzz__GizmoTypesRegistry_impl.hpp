#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoTypesRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoTypesRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoTypeInfo_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoTypesRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9efd6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry.RegisterGizmoType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::System::Type*, ::System::Action_1<::System::Object*>*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::RegisterGizmoType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9efd72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"RegisterGizmoType", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry.InitGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::InitGizmos)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x9efd80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"InitGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry.IsValidDataTypeForGizmoType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::Meta::XR::ImmersiveDebugger::DebugGizmoType)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::IsValidDataTypeForGizmoType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9ef16c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"IsValidDataTypeForGizmoType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry.RenderGizmo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::RenderGizmo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9efd0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"RenderGizmo", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::setStaticF_GizmoTypeInfos(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType,::System::Type*>,::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType,::System::Type*>,::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>*, "GizmoTypeInfos", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType,::System::Type*>,::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType,::System::Type*>,::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::getStaticF_GizmoTypeInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType,::System::Type*>,::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>*, "GizmoTypeInfos", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::RegisterGizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType  gizmoType, ::System::Type*  dataSourceType, ::System::Action_1<::System::Object*>*  renderDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"RegisterGizmoType", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gizmoType, dataSourceType, renderDelegate);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::InitGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"InitGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::IsValidDataTypeForGizmoType(::System::Type*  type, ::Meta::XR::ImmersiveDebugger::DebugGizmoType  gizmoType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"IsValidDataTypeForGizmoType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, gizmoType);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::RenderGizmo(::Meta::XR::ImmersiveDebugger::DebugGizmoType  type, ::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*>(),
                        {"RenderGizmo", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, dataSource);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry::GizmoTypesRegistry()   {
}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9efe23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9efe244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9efe2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_2)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9efe39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_3)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9efe45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_4)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9efe53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_5)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9efe640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_6)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9efe750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_7)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9efe83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_8)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9efe928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c._InitGizmos_b__3_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_9)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9efea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*  value)  {
::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_0", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_0", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_1(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_1", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_1", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_2(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_2", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_2", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_3(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_3", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_3", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_4(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_4", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_4", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_5(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_5", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_5()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_5", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_6(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_6", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_6()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_6", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_7(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_7", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_7()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_7", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_8(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_8", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_8()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_8", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::setStaticF___9__3_9(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__3_9", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::getStaticF___9__3_9()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__3_9", ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_0(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_1(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_2(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_3(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_4(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_5(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_6(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_7(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_8(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::_InitGizmos_b__3_9(::System::Object*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>(),
                        {"<InitGizmos>b__3_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c::GizmoTypesRegistry___c()   {
}
