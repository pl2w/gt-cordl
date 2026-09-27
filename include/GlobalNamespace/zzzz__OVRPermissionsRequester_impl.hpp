#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPermissionsRequester.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_Permission_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.add_PermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa60c8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"add_PermissionGranted", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.remove_PermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa60c974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"remove_PermissionGranted", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.GetPermissionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(&::GlobalNamespace::OVRPermissionsRequester::GetPermissionId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa60ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"GetPermissionId", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionSupportedByPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(&::GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa60cb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"IsPermissionSupportedByPlatform", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(&::GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa60cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"IsPermissionGranted", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*)>(&::GlobalNamespace::OVRPermissionsRequester::Request)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa60cca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"Request", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.RequestPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*)>(&::GlobalNamespace::OVRPermissionsRequester::RequestPermissions)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa60cca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"RequestPermissions", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.ShouldRequestPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(&::GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa60d05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"ShouldRequestPermission", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.BuildPermissionCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Android::PermissionCallbacks* (*)()>(&::GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa60d158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"BuildPermissionCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPermissionsRequester::setStaticF_PermissionGranted(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "PermissionGranted", ::GlobalNamespace::OVRPermissionsRequester*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester::getStaticF_PermissionGranted()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "PermissionGranted", ::GlobalNamespace::OVRPermissionsRequester*>();
}
inline void GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"add_PermissionGranted", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"remove_PermissionGranted", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRPermissionsRequester::GetPermissionId(::GlobalNamespace::OVRPermissionsRequester_Permission  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"GetPermissionId", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform(::GlobalNamespace::OVRPermissionsRequester_Permission  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"IsPermissionSupportedByPlatform", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted(::GlobalNamespace::OVRPermissionsRequester_Permission  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"IsPermissionGranted", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permission);
}
inline void GlobalNamespace::OVRPermissionsRequester::Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*  permissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"Request", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissions);
}
inline void GlobalNamespace::OVRPermissionsRequester::RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*  permissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"RequestPermissions", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissions);
}
inline bool GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission(::GlobalNamespace::OVRPermissionsRequester_Permission  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"ShouldRequestPermission", {}, {::i2c::type_of<::GlobalNamespace::OVRPermissionsRequester_Permission>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permission);
}
inline ::UnityEngine::Android::PermissionCallbacks* GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester*>(),
                        {"BuildPermissionCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::PermissionCallbacks*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester::OVRPermissionsRequester()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)()>(&::GlobalNamespace::OVRPermissionsRequester___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa60d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._BuildPermissionCallbacks_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)(::StringW)>(&::GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa60d374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {"<BuildPermissionCallbacks>b__15_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._BuildPermissionCallbacks_b__15_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)(::StringW)>(&::GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa60d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {"<BuildPermissionCallbacks>b__15_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9(::GlobalNamespace::OVRPermissionsRequester___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPermissionsRequester___c*, "<>9", ::GlobalNamespace::OVRPermissionsRequester___c*>(std::forward<::GlobalNamespace::OVRPermissionsRequester___c*>(value));
}
inline ::GlobalNamespace::OVRPermissionsRequester___c* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPermissionsRequester___c*, "<>9", ::GlobalNamespace::OVRPermissionsRequester___c*>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9__15_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__15_0", ::GlobalNamespace::OVRPermissionsRequester___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__15_0", ::GlobalNamespace::OVRPermissionsRequester___c*>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9__15_1(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__15_1", ::GlobalNamespace::OVRPermissionsRequester___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9__15_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__15_1", ::GlobalNamespace::OVRPermissionsRequester___c*>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_0(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {"<BuildPermissionCallbacks>b__15_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_1(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPermissionsRequester___c*>(),
                        {"<BuildPermissionCallbacks>b__15_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline ::GlobalNamespace::OVRPermissionsRequester___c* GlobalNamespace::OVRPermissionsRequester___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPermissionsRequester___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester___c::OVRPermissionsRequester___c()   {
}
