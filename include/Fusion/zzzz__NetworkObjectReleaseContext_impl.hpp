#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectReleaseContext.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_impl.hpp"
#include "Fusion/zzzz__NetworkObjectReleaseContext_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectReleaseContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectReleaseContext::*)(::Fusion::NetworkObject*, ::Fusion::NetworkObjectTypeId, bool, bool)>(&::Fusion::NetworkObjectReleaseContext::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fcc688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectReleaseContext>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectReleaseContext.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectReleaseContext::*)()>(&::Fusion::NetworkObjectReleaseContext::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fcc6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectReleaseContext>(),
                    {::i2c::class_of<::Fusion::NetworkObjectReleaseContext>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectReleaseContext::_ctor(::Fusion::NetworkObject*  obj, ::Fusion::NetworkObjectTypeId  typeId, bool  isBeingDestroyed, bool  isNested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectReleaseContext>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, typeId, isBeingDestroyed, isNested);
}
inline ::StringW Fusion::NetworkObjectReleaseContext::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectReleaseContext>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Object", ty: "::UnityW<::Fusion::NetworkObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TypeId", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsBeingDestroyed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsNestedObject", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectReleaseContext::NetworkObjectReleaseContext(::UnityW<::Fusion::NetworkObject>  Object, ::Fusion::NetworkObjectTypeId  TypeId, bool  IsBeingDestroyed, bool  IsNestedObject) noexcept  {
this->Object = Object;
this->TypeId = TypeId;
this->IsBeingDestroyed = IsBeingDestroyed;
this->IsNestedObject = IsNestedObject;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectReleaseContext::NetworkObjectReleaseContext()   {
}
