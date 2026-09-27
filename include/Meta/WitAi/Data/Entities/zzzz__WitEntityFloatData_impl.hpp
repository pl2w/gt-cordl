#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityFloatData.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityDataBase_1_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityFloatData_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityFloatData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitEntityFloatData::*)()>(&::Meta::WitAi::Data::Entities::WitEntityFloatData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityFloatData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitEntityFloatData::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::Entities::WitEntityFloatData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9c090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityFloatData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Entities::WitEntityFloatData::*)(::System::Object*)>(&::Meta::WitAi::Data::Entities::WitEntityFloatData::Equals)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e9c108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitEntityFloatData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Entities::WitEntityFloatData::*)()>(&::Meta::WitAi::Data::Entities::WitEntityFloatData::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Data::Entities::WitEntityFloatData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitEntityFloatData::_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool Meta::WitAi::Data::Entities::WitEntityFloatData::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Meta::WitAi::Data::Entities::WitEntityFloatData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Meta::WitAi::Data::Entities::WitEntityFloatData* Meta::WitAi::Data::Entities::WitEntityFloatData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitEntityFloatData*>());
}
/// @brief [Preserve]
inline ::Meta::WitAi::Data::Entities::WitEntityFloatData* Meta::WitAi::Data::Entities::WitEntityFloatData::New_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitEntityFloatData*>(node));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitEntityFloatData::WitEntityFloatData()   {
}
