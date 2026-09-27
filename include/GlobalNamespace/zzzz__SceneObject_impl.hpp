#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneObject_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneObject.GetObjectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::SceneObject::*)()>(&::GlobalNamespace::SceneObject::GetObjectType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b218f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"GetObjectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneObject::*)(int32_t, uint64_t)>(&::GlobalNamespace::SceneObject::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b219f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneObject::*)(::GlobalNamespace::SceneObject*)>(&::GlobalNamespace::SceneObject::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b21ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneObject::*)(::System::Object*)>(&::GlobalNamespace::SceneObject::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b21af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                    {::i2c::class_of<::GlobalNamespace::SceneObject*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SceneObject::*)()>(&::GlobalNamespace::SceneObject::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b21b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                    {::i2c::class_of<::GlobalNamespace::SceneObject*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SceneObject*, ::GlobalNamespace::SceneObject*)>(&::GlobalNamespace::SceneObject::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b21c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>(), ::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneObject.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SceneObject*, ::GlobalNamespace::SceneObject*)>(&::GlobalNamespace::SceneObject::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b21c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>(), ::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SceneObject::__cordl_internal_get_classID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___classID;
}
constexpr int32_t const& GlobalNamespace::SceneObject::__cordl_internal_get_classID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___classID;
}
constexpr void GlobalNamespace::SceneObject::__cordl_internal_set_classID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___classID = value;
}
constexpr uint64_t& GlobalNamespace::SceneObject::__cordl_internal_get_fileID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileID;
}
constexpr uint64_t const& GlobalNamespace::SceneObject::__cordl_internal_get_fileID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileID;
}
constexpr void GlobalNamespace::SceneObject::__cordl_internal_set_fileID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileID = value;
}
constexpr ::StringW& GlobalNamespace::SceneObject::__cordl_internal_get_typeString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeString;
}
constexpr ::StringW const& GlobalNamespace::SceneObject::__cordl_internal_get_typeString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeString;
}
constexpr void GlobalNamespace::SceneObject::__cordl_internal_set_typeString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeString = value;
}
constexpr ::StringW& GlobalNamespace::SceneObject::__cordl_internal_get_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr ::StringW const& GlobalNamespace::SceneObject::__cordl_internal_get_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr void GlobalNamespace::SceneObject::__cordl_internal_set_json(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___json = value;
}
inline ::System::Type* GlobalNamespace::SceneObject::GetObjectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"GetObjectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void GlobalNamespace::SceneObject::_ctor(int32_t  classID, uint64_t  fileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classID, fileID);
}
inline bool GlobalNamespace::SceneObject::Equals(::GlobalNamespace::SceneObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool GlobalNamespace::SceneObject::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SceneObject*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::SceneObject::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SceneObject*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneObject::op_Equality(::GlobalNamespace::SceneObject*  x, ::GlobalNamespace::SceneObject*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>(), ::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool GlobalNamespace::SceneObject::op_Inequality(::GlobalNamespace::SceneObject*  x, ::GlobalNamespace::SceneObject*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneObject*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::SceneObject*>(), ::i2c::type_of<::GlobalNamespace::SceneObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::GlobalNamespace::SceneObject* GlobalNamespace::SceneObject::New_ctor(int32_t  classID, uint64_t  fileID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SceneObject*>(classID, fileID));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SceneObject*>"
constexpr  GlobalNamespace::SceneObject::operator ::System::IEquatable_1<::GlobalNamespace::SceneObject*>*() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SceneObject*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SceneObject*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SceneObject*>* GlobalNamespace::SceneObject::i___System__IEquatable_1___GlobalNamespace__SceneObject__() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SceneObject*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneObject::SceneObject()   {
}
