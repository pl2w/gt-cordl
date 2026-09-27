#pragma once
// IWYU pragma private; include "Pathfinding/IPathModifier.hpp"
#include "Pathfinding/zzzz__IPathModifier_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::IPathModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::IPathModifier::*)()>(&::Pathfinding::IPathModifier::get_Order)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IPathModifier*>(),
                    {::i2c::class_of<::Pathfinding::IPathModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IPathModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IPathModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::IPathModifier::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IPathModifier*>(),
                    {::i2c::class_of<::Pathfinding::IPathModifier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IPathModifier.PreProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IPathModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::IPathModifier::PreProcess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IPathModifier*>(),
                    {::i2c::class_of<::Pathfinding::IPathModifier*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::IPathModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IPathModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::IPathModifier::Apply(::Pathfinding::Path*  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IPathModifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::IPathModifier::PreProcess(::Pathfinding::Path*  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IPathModifier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
