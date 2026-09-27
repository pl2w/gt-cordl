#pragma once
// IWYU pragma private; include "System/ComponentModel/ContainerFilterService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ContainerFilterService_def.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ContainerFilterService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ContainerFilterService::*)()>(&::System::ComponentModel::ContainerFilterService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4cbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ContainerFilterService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ContainerFilterService.FilterComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ComponentCollection* (::System::ComponentModel::ContainerFilterService::*)(::System::ComponentModel::ComponentCollection*)>(&::System::ComponentModel::ContainerFilterService::FilterComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4cbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ContainerFilterService*>(),
                    {::i2c::class_of<::System::ComponentModel::ContainerFilterService*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ContainerFilterService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ContainerFilterService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::ComponentCollection* System::ComponentModel::ContainerFilterService::FilterComponents(::System::ComponentModel::ComponentCollection*  components)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ContainerFilterService*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ComponentCollection*>(this, ___internal_method, components);
}
inline ::System::ComponentModel::ContainerFilterService* System::ComponentModel::ContainerFilterService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ContainerFilterService*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ContainerFilterService::ContainerFilterService()   {
}
