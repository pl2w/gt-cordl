#pragma once
// IWYU pragma private; include "GlobalNamespace/UserHydratedProgressionTreeResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UserHydratedProgressionTreeResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__UserHydratedNodeVector_def.hpp"
#include "GlobalNamespace/zzzz__UserHydratedProgressionTrackResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53aa748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserHydratedProgressionTreeResponse*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53aa7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserHydratedProgressionTreeResponse*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53aa83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(bool)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53aa8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserHydratedProgressionTreeResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x53aaa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.set_Tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::GlobalNamespace::ProgressionTree*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::set_Tree)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53aab5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Tree", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.get_Tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTree* (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::get_Tree)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53aac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Tree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.set_Nodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::GlobalNamespace::UserHydratedNodeVector*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::set_Nodes)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x53aad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Nodes", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedNodeVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.get_Nodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserHydratedNodeVector* (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::get_Nodes)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x53aae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Nodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.set_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::GlobalNamespace::UserHydratedProgressionTrackResponse*)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::set_Track)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x53aaf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.get_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserHydratedProgressionTrackResponse* (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::get_Track)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x53ab038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Track", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::set_PlayerId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ab140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::get_PlayerId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ab218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.set_InventoryRefreshRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(bool)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::set_InventoryRefreshRequired)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ab2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_InventoryRefreshRequired", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.get_InventoryRefreshRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::get_InventoryRefreshRequired)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ab3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_InventoryRefreshRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53ab498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTreeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTreeResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53ab57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UserHydratedProgressionTreeResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UserHydratedProgressionTreeResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UserHydratedProgressionTreeResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserHydratedProgressionTreeResponse::getCPtr(::GlobalNamespace::UserHydratedProgressionTreeResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserHydratedProgressionTreeResponse::swigRelease(::GlobalNamespace::UserHydratedProgressionTreeResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* GlobalNamespace::UserHydratedProgressionTreeResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::set_Tree(::GlobalNamespace::ProgressionTree*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Tree", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTree* GlobalNamespace::UserHydratedProgressionTreeResponse::get_Tree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Tree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTree*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::set_Nodes(::GlobalNamespace::UserHydratedNodeVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Nodes", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedNodeVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UserHydratedNodeVector* GlobalNamespace::UserHydratedProgressionTreeResponse::get_Nodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Nodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserHydratedNodeVector*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::set_Track(::GlobalNamespace::UserHydratedProgressionTrackResponse*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* GlobalNamespace::UserHydratedProgressionTreeResponse::get_Track()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_Track", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::set_PlayerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::UserHydratedProgressionTreeResponse::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::set_InventoryRefreshRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"set_InventoryRefreshRequired", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UserHydratedProgressionTreeResponse::get_InventoryRefreshRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {"get_InventoryRefreshRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UserHydratedProgressionTreeResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline void GlobalNamespace::UserHydratedProgressionTreeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* GlobalNamespace::UserHydratedProgressionTreeResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* GlobalNamespace::UserHydratedProgressionTreeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserHydratedProgressionTreeResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserHydratedProgressionTreeResponse::UserHydratedProgressionTreeResponse()   {
}
