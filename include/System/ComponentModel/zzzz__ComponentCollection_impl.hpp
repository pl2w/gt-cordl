#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentCollection.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentCollection::*)(::ArrayW<::System::ComponentModel::IComponent*>)>(&::System::ComponentModel::ComponentCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xad46238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::IComponent*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(::StringW)>(&::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xad46280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                    {::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(int32_t)>(&::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad467c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                    {::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentCollection::*)(::ArrayW<::System::ComponentModel::IComponent*>, int32_t)>(&::System::ComponentModel::ComponentCollection::CopyTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad46854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::IComponent*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ComponentCollection::_ctor(::ArrayW<::System::ComponentModel::IComponent*>  components)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::IComponent*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method, name);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method, index);
}
inline void System::ComponentModel::ComponentCollection::CopyTo(::ArrayW<::System::ComponentModel::IComponent*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::IComponent*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::ComponentModel::ComponentCollection* System::ComponentModel::ComponentCollection::New_ctor(::ArrayW<::System::ComponentModel::IComponent*>  components)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComponentCollection*>(components));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentCollection::ComponentCollection()   {
}
