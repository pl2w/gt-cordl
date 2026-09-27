#pragma once
// IWYU pragma private; include "Fusion/SerializableType_1.hpp"
#include "Fusion/zzzz__SerializableType_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename BaseType>
inline ::System::Type* Fusion::SerializableType_1<BaseType>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType_1<BaseType>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
template<typename BaseType>
inline ::System::Type* Fusion::SerializableType_1<BaseType>::op_Implicit___System__Type_(::Fusion::SerializableType_1<BaseType>  serializableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType_1<BaseType>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SerializableType_1<BaseType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, serializableType);
}
template<typename BaseType>
inline bool Fusion::SerializableType_1<BaseType>::Equals(::Fusion::SerializableType_1<BaseType>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType_1<BaseType>>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::SerializableType_1<BaseType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename BaseType>
inline bool Fusion::SerializableType_1<BaseType>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SerializableType_1<BaseType>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename BaseType>
inline int32_t Fusion::SerializableType_1<BaseType>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SerializableType_1<BaseType>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>"
template<typename BaseType>
constexpr  Fusion::SerializableType_1<BaseType>::operator ::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>*()  {
return static_cast<::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>"
template<typename BaseType>
constexpr ::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>* Fusion::SerializableType_1<BaseType>::i___System__IEquatable_1___Fusion__SerializableType_1_BaseType__()  {
return static_cast<::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "AssemblyQualifiedName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename BaseType>
constexpr ::Fusion::SerializableType_1<BaseType>::SerializableType_1(::StringW  AssemblyQualifiedName) noexcept  {
this->AssemblyQualifiedName = AssemblyQualifiedName;
}
// Ctor Parameters []
template<typename BaseType>
constexpr ::Fusion::SerializableType_1<BaseType>::SerializableType_1()   {
}
