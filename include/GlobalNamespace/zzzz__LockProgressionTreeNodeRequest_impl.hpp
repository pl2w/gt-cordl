#pragma once
// IWYU pragma private; include "GlobalNamespace/LockProgressionTreeNodeRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__LockProgressionTreeNodeRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5488bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::LockProgressionTreeNodeRequest*)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5488c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::LockProgressionTreeNodeRequest*)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5488cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(bool)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5488d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5488ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::StringW)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_titleId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5488fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_titleId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54890a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::StringW)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_envId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5489174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_envId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x548924c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_envId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_treeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::StringW)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_treeId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5489320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_treeId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_treeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_treeId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54893f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_treeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_node_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::StringW)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_node_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54894cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_node_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_node_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_node_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54895a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_node_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_mothership_player_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(::StringW)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_mothership_player_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5489678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_mothership_player_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_mothership_player_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_mothership_player_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5489750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_mothership_player_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_refund_costs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(bool)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_refund_costs)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5489824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_refund_costs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_refund_costs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_refund_costs)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54898fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_refund_costs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.set_rewind_rewards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)(bool)>(&::GlobalNamespace::LockProgressionTreeNodeRequest::set_rewind_rewards)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54899d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_rewind_rewards", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest.get_rewind_rewards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::get_rewind_rewards)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5489aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_rewind_rewards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockProgressionTreeNodeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockProgressionTreeNodeRequest::*)()>(&::GlobalNamespace::LockProgressionTreeNodeRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5489b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::LockProgressionTreeNodeRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::LockProgressionTreeNodeRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::LockProgressionTreeNodeRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::LockProgressionTreeNodeRequest::getCPtr(::GlobalNamespace::LockProgressionTreeNodeRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::LockProgressionTreeNodeRequest::swigRelease(::GlobalNamespace::LockProgressionTreeNodeRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::LockProgressionTreeNodeRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_titleId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LockProgressionTreeNodeRequest::get_titleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_envId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LockProgressionTreeNodeRequest::get_envId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_envId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_treeId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_treeId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LockProgressionTreeNodeRequest::get_treeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_treeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_node_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_node_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LockProgressionTreeNodeRequest::get_node_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_node_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_mothership_player_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_mothership_player_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LockProgressionTreeNodeRequest::get_mothership_player_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_mothership_player_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_refund_costs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_refund_costs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LockProgressionTreeNodeRequest::get_refund_costs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_refund_costs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::set_rewind_rewards(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"set_rewind_rewards", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LockProgressionTreeNodeRequest::get_rewind_rewards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {"get_rewind_rewards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LockProgressionTreeNodeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockProgressionTreeNodeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LockProgressionTreeNodeRequest* GlobalNamespace::LockProgressionTreeNodeRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LockProgressionTreeNodeRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::LockProgressionTreeNodeRequest* GlobalNamespace::LockProgressionTreeNodeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LockProgressionTreeNodeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LockProgressionTreeNodeRequest::LockProgressionTreeNodeRequest()   {
}
