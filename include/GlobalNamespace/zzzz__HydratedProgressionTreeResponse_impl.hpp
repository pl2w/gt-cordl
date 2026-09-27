#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedProgressionTreeResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__HydratedProgressionTreeResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTrack_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__TreeNodeVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::HydratedProgressionTreeResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5438fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::HydratedProgressionTreeResponse*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5439098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTreeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::HydratedProgressionTreeResponse*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x54390d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTreeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)(bool)>(&::GlobalNamespace::HydratedProgressionTreeResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5439174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HydratedProgressionTreeResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x54392e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.set_Tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)(::GlobalNamespace::ProgressionTree*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::set_Tree)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x54393f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Tree", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.get_Tree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTree* (::GlobalNamespace::HydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::HydratedProgressionTreeResponse::get_Tree)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x54394e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Tree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.set_Nodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)(::GlobalNamespace::TreeNodeVector*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::set_Nodes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x54395f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Nodes", {}, {::i2c::type_of<::GlobalNamespace::TreeNodeVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.get_Nodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TreeNodeVector* (::GlobalNamespace::HydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::HydratedProgressionTreeResponse::get_Nodes)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x54396e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Nodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.set_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)(::GlobalNamespace::ProgressionTrack*)>(&::GlobalNamespace::HydratedProgressionTreeResponse::set_Track)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x54397f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.get_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTrack* (::GlobalNamespace::HydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::HydratedProgressionTreeResponse::get_Track)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x54398e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Track", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HydratedProgressionTreeResponse::*)(::StringW)>(&::GlobalNamespace::HydratedProgressionTreeResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x54399ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTreeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTreeResponse::*)()>(&::GlobalNamespace::HydratedProgressionTreeResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5439ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::HydratedProgressionTreeResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::HydratedProgressionTreeResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::HydratedProgressionTreeResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::HydratedProgressionTreeResponse::getCPtr(::GlobalNamespace::HydratedProgressionTreeResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTreeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::HydratedProgressionTreeResponse::swigRelease(::GlobalNamespace::HydratedProgressionTreeResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTreeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::HydratedProgressionTreeResponse* GlobalNamespace::HydratedProgressionTreeResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HydratedProgressionTreeResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::set_Tree(::GlobalNamespace::ProgressionTree*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Tree", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTree* GlobalNamespace::HydratedProgressionTreeResponse::get_Tree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Tree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTree*>(this, ___internal_method);
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::set_Nodes(::GlobalNamespace::TreeNodeVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Nodes", {}, {::i2c::type_of<::GlobalNamespace::TreeNodeVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TreeNodeVector* GlobalNamespace::HydratedProgressionTreeResponse::get_Nodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Nodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TreeNodeVector*>(this, ___internal_method);
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::set_Track(::GlobalNamespace::ProgressionTrack*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTrack* GlobalNamespace::HydratedProgressionTreeResponse::get_Track()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {"get_Track", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTrack*>(this, ___internal_method);
}
inline bool GlobalNamespace::HydratedProgressionTreeResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline void GlobalNamespace::HydratedProgressionTreeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTreeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HydratedProgressionTreeResponse* GlobalNamespace::HydratedProgressionTreeResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydratedProgressionTreeResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::HydratedProgressionTreeResponse* GlobalNamespace::HydratedProgressionTreeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydratedProgressionTreeResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydratedProgressionTreeResponse::HydratedProgressionTreeResponse()   {
}
