#pragma once
// IWYU pragma private; include "XNode/NodeDataCache.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "XNode/zzzz__NodeDataCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "XNode/zzzz__NodeDataCache_def.hpp"
#include "XNode/zzzz__NodePort_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::XNode::NodeDataCache.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::XNode::NodeDataCache::get_Initialized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb98f794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.GetTypeQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::XNode::NodeDataCache::GetTypeQualifiedName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb98f7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetTypeQualifiedName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.UpdatePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::XNode::Node*, ::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*)>(&::XNode::NodeDataCache::UpdatePorts)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0xb98c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"UpdatePorts", {}, {::i2c::type_of<::XNode::Node*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.GetBackingValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::XNode::NodeDataCache::GetBackingValueType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb990970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetBackingValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.IsDynamicListPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::XNode::NodePort*)>(&::XNode::NodeDataCache::IsDynamicListPort)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb98fff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"IsDynamicListPort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.BuildCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::XNode::NodeDataCache::BuildCache)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xb98f924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"BuildCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.GetNodeFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&::XNode::NodeDataCache::GetNodeFields)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xb9913e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetNodeFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache.CachePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::XNode::NodeDataCache::CachePorts)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0xb990acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"CachePorts", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void XNode::NodeDataCache::setStaticF_portDataCache(::XNode::NodeDataCache_PortDataCache*  value)  {
::cordl_internals::setStaticField<::XNode::NodeDataCache_PortDataCache*, "portDataCache", ::XNode::NodeDataCache*>(std::forward<::XNode::NodeDataCache_PortDataCache*>(value));
}
inline ::XNode::NodeDataCache_PortDataCache* XNode::NodeDataCache::getStaticF_portDataCache()  {
return ::cordl_internals::getStaticField<::XNode::NodeDataCache_PortDataCache*, "portDataCache", ::XNode::NodeDataCache*>();
}
inline void XNode::NodeDataCache::setStaticF_formerlySerializedAsCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "formerlySerializedAsCache", ::XNode::NodeDataCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* XNode::NodeDataCache::getStaticF_formerlySerializedAsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "formerlySerializedAsCache", ::XNode::NodeDataCache*>();
}
inline void XNode::NodeDataCache::setStaticF_typeQualifiedNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "typeQualifiedNameCache", ::XNode::NodeDataCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* XNode::NodeDataCache::getStaticF_typeQualifiedNameCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "typeQualifiedNameCache", ::XNode::NodeDataCache*>();
}
inline bool XNode::NodeDataCache::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW XNode::NodeDataCache::GetTypeQualifiedName(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetTypeQualifiedName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline void XNode::NodeDataCache::UpdatePorts(::XNode::Node*  node, ::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*  ports)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"UpdatePorts", {}, {::i2c::type_of<::XNode::Node*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, ports);
}
inline ::System::Type* XNode::NodeDataCache::GetBackingValueType(::System::Type*  portValType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetBackingValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, portValType);
}
inline bool XNode::NodeDataCache::IsDynamicListPort(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"IsDynamicListPort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, port);
}
inline void XNode::NodeDataCache::BuildCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"BuildCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* XNode::NodeDataCache::GetNodeFields(::System::Type*  nodeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"GetNodeFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, nodeType);
}
inline void XNode::NodeDataCache::CachePorts(::System::Type*  nodeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache*>(),
                        {"CachePorts", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeType);
}
// Ctor Parameters []
constexpr ::XNode::NodeDataCache::NodeDataCache()   {
}
//  Writing Method size for method: ::XNode::NodeDataCache___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeDataCache___c__DisplayClass9_0::*)()>(&::XNode::NodeDataCache___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb990a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c__DisplayClass9_0._BuildCache_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c__DisplayClass9_0::*)(::System::Type*)>(&::XNode::NodeDataCache___c__DisplayClass9_0::_BuildCache_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb991c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass9_0*>(),
                        {"<BuildCache>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_get_baseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseType;
}
constexpr ::System::Type* const& XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_get_baseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseType;
}
constexpr void XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_set_baseType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseType = value;
}
constexpr ::System::Func_2<::System::Type*,bool>*& XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Func_2<::System::Type*,bool>* const& XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void XNode::NodeDataCache___c__DisplayClass9_0::__cordl_internal_set___9__0(::System::Func_2<::System::Type*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void XNode::NodeDataCache___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::NodeDataCache___c__DisplayClass9_0::_BuildCache_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass9_0*>(),
                        {"<BuildCache>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::XNode::NodeDataCache___c__DisplayClass9_0* XNode::NodeDataCache___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeDataCache___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::XNode::NodeDataCache___c__DisplayClass9_0::NodeDataCache___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::XNode::NodeDataCache___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeDataCache___c__DisplayClass10_0::*)()>(&::XNode::NodeDataCache___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb991694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c__DisplayClass10_0._GetNodeFields_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c__DisplayClass10_0::*)(::System::Reflection::FieldInfo*)>(&::XNode::NodeDataCache___c__DisplayClass10_0::_GetNodeFields_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb991bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass10_0*>(),
                        {"<GetNodeFields>b__0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& XNode::NodeDataCache___c__DisplayClass10_0::__cordl_internal_get_parentField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentField;
}
constexpr ::System::Reflection::FieldInfo* const& XNode::NodeDataCache___c__DisplayClass10_0::__cordl_internal_get_parentField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentField;
}
constexpr void XNode::NodeDataCache___c__DisplayClass10_0::__cordl_internal_set_parentField(::System::Reflection::FieldInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentField = value;
}
inline void XNode::NodeDataCache___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::NodeDataCache___c__DisplayClass10_0::_GetNodeFields_b__0(::System::Reflection::FieldInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c__DisplayClass10_0*>(),
                        {"<GetNodeFields>b__0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::XNode::NodeDataCache___c__DisplayClass10_0* XNode::NodeDataCache___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeDataCache___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::XNode::NodeDataCache___c__DisplayClass10_0::NodeDataCache___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::XNode::NodeDataCache___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeDataCache___c::*)()>(&::XNode::NodeDataCache___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb991978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c._IsDynamicListPort_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c::*)(::System::Object*)>(&::XNode::NodeDataCache___c::_IsDynamicListPort_b__8_0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb991980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<IsDynamicListPort>b__8_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c._CachePorts_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c::*)(::System::Object*)>(&::XNode::NodeDataCache___c::_CachePorts_b__11_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb991a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c._CachePorts_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c::*)(::System::Object*)>(&::XNode::NodeDataCache___c::_CachePorts_b__11_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb991ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeDataCache___c._CachePorts_b__11_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeDataCache___c::*)(::System::Object*)>(&::XNode::NodeDataCache___c::_CachePorts_b__11_2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb991b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void XNode::NodeDataCache___c::setStaticF___9(::XNode::NodeDataCache___c*  value)  {
::cordl_internals::setStaticField<::XNode::NodeDataCache___c*, "<>9", ::XNode::NodeDataCache___c*>(std::forward<::XNode::NodeDataCache___c*>(value));
}
inline ::XNode::NodeDataCache___c* XNode::NodeDataCache___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::XNode::NodeDataCache___c*, "<>9", ::XNode::NodeDataCache___c*>();
}
inline void XNode::NodeDataCache___c::setStaticF___9__8_0(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__8_0", ::XNode::NodeDataCache___c*>(std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
inline ::System::Func_2<::System::Object*,bool>* XNode::NodeDataCache___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__8_0", ::XNode::NodeDataCache___c*>();
}
inline void XNode::NodeDataCache___c::setStaticF___9__11_0(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_0", ::XNode::NodeDataCache___c*>(std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
inline ::System::Func_2<::System::Object*,bool>* XNode::NodeDataCache___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_0", ::XNode::NodeDataCache___c*>();
}
inline void XNode::NodeDataCache___c::setStaticF___9__11_1(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_1", ::XNode::NodeDataCache___c*>(std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
inline ::System::Func_2<::System::Object*,bool>* XNode::NodeDataCache___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_1", ::XNode::NodeDataCache___c*>();
}
inline void XNode::NodeDataCache___c::setStaticF___9__11_2(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_2", ::XNode::NodeDataCache___c*>(std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
inline ::System::Func_2<::System::Object*,bool>* XNode::NodeDataCache___c::getStaticF___9__11_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__11_2", ::XNode::NodeDataCache___c*>();
}
inline void XNode::NodeDataCache___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::NodeDataCache___c::_IsDynamicListPort_b__8_0(::System::Object*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<IsDynamicListPort>b__8_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool XNode::NodeDataCache___c::_CachePorts_b__11_0(::System::Object*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool XNode::NodeDataCache___c::_CachePorts_b__11_1(::System::Object*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool XNode::NodeDataCache___c::_CachePorts_b__11_2(::System::Object*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache___c*>(),
                        {"<CachePorts>b__11_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::XNode::NodeDataCache___c* XNode::NodeDataCache___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeDataCache___c*>());
}
// Ctor Parameters []
constexpr ::XNode::NodeDataCache___c::NodeDataCache___c()   {
}
//  Writing Method size for method: ::XNode::NodeDataCache_PortDataCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeDataCache_PortDataCache::*)()>(&::XNode::NodeDataCache_PortDataCache::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb990a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache_PortDataCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void XNode::NodeDataCache_PortDataCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeDataCache_PortDataCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodeDataCache_PortDataCache* XNode::NodeDataCache_PortDataCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeDataCache_PortDataCache*>());
}
// Ctor Parameters []
constexpr ::XNode::NodeDataCache_PortDataCache::NodeDataCache_PortDataCache()   {
}
