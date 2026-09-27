#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityData.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityDataBase_1_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityData_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitEntityData::*)()>(&::Meta::WitAi::Data::Entities::WitEntityData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitEntityData::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::Entities::WitEntityData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Entities::WitEntityData::*)(::System::Object*)>(&::Meta::WitAi::Data::Entities::WitEntityData::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e9c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Entities::WitEntityData::*)()>(&::Meta::WitAi::Data::Entities::WitEntityData::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Data::Entities::WitEntityData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitEntityData::_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool Meta::WitAi::Data::Entities::WitEntityData::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Meta::WitAi::Data::Entities::WitEntityData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Meta::WitAi::Data::Entities::WitEntityData* Meta::WitAi::Data::Entities::WitEntityData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitEntityData*>());
}
/// @brief [Preserve]
inline ::Meta::WitAi::Data::Entities::WitEntityData* Meta::WitAi::Data::Entities::WitEntityData::New_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitEntityData*>(node));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitEntityData::WitEntityData()   {
}
