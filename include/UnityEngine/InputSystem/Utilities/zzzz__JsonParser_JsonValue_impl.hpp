#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonValue.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValueType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonParser_JsonValue::*)()>(&::GlobalNamespace::JsonParser_JsonValue::ToBoolean)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaf3e02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.ToInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::JsonParser_JsonValue::*)()>(&::GlobalNamespace::JsonParser_JsonValue::ToInteger)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaf3e608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToInteger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::JsonParser_JsonValue::*)()>(&::GlobalNamespace::JsonParser_JsonValue::ToDouble)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaf3e6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JsonParser_JsonValue::*)()>(&::GlobalNamespace::JsonParser_JsonValue::ToString)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xaf3e16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(bool)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf3dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(int64_t)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf3daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(double_t)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf3db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(::StringW)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf3e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(::GlobalNamespace::JsonParser_JsonString)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf32ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf3daa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf3e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Implicit___GlobalNamespace__JsonParser_JsonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonValue (*)(::System::Enum*)>(&::GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf3e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonParser_JsonValue::*)(::GlobalNamespace::JsonParser_JsonValue)>(&::GlobalNamespace::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xaf3e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::GlobalNamespace::JsonParser_JsonValue)>(&::GlobalNamespace::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0xaf3eaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonParser_JsonValue::*)(::System::Object*)>(&::GlobalNamespace::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf3f278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JsonParser_JsonValue::*)()>(&::GlobalNamespace::JsonParser_JsonValue::GetHashCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaf3f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::JsonParser_JsonValue, ::GlobalNamespace::JsonParser_JsonValue)>(&::GlobalNamespace::JsonParser_JsonValue::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf3ce8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonValue.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::JsonParser_JsonValue, ::GlobalNamespace::JsonParser_JsonValue)>(&::GlobalNamespace::JsonParser_JsonValue::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf3f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::JsonParser_JsonValue::ToBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::JsonParser_JsonValue::ToInteger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToInteger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline double_t GlobalNamespace::JsonParser_JsonValue::ToDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"ToDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::JsonParser_JsonValue::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(double_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, str);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(::GlobalNamespace::JsonParser_JsonString  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, str);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, array);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, obj);
}
inline ::GlobalNamespace::JsonParser_JsonValue GlobalNamespace::JsonParser_JsonValue::op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Enum*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline bool GlobalNamespace::JsonParser_JsonValue::Equals(::GlobalNamespace::JsonParser_JsonValue  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::JsonParser_JsonValue::Equals(::System::Object*  obj, ::GlobalNamespace::JsonParser_JsonValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, value);
}
inline bool GlobalNamespace::JsonParser_JsonValue::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::JsonParser_JsonValue::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::JsonParser_JsonValue::op_Equality(::GlobalNamespace::JsonParser_JsonValue  left, ::GlobalNamespace::JsonParser_JsonValue  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool GlobalNamespace::JsonParser_JsonValue::op_Inequality(::GlobalNamespace::JsonParser_JsonValue  left, ::GlobalNamespace::JsonParser_JsonValue  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonValue>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>"
constexpr  GlobalNamespace::JsonParser_JsonValue::operator ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>* GlobalNamespace::JsonParser_JsonValue::i___System__IEquatable_1___GlobalNamespace__JsonParser_JsonValue_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::JsonParser_JsonValueType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boolValue", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringValue", ty: "::GlobalNamespace::JsonParser_JsonString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "arrayValue", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objectValue", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anyValue", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonParser_JsonValue::JsonParser_JsonValue(::GlobalNamespace::JsonParser_JsonValueType  type, bool  boolValue, double_t  realValue, int64_t  integerValue, ::GlobalNamespace::JsonParser_JsonString  stringValue, ::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*  arrayValue, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*  objectValue, ::System::Object*  anyValue) noexcept  {
this->type = type;
this->boolValue = boolValue;
this->realValue = realValue;
this->integerValue = integerValue;
this->stringValue = stringValue;
this->arrayValue = arrayValue;
this->objectValue = objectValue;
this->anyValue = anyValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonParser_JsonValue::JsonParser_JsonValue()   {
}
