#pragma once
// IWYU pragma private; include "Pathfinding/PathNNConstraint.hpp"
#include "Pathfinding/zzzz__NNConstraint_impl.hpp"
#include "Pathfinding/zzzz__PathNNConstraint_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathNNConstraint.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathNNConstraint* (*)()>(&::Pathfinding::PathNNConstraint::get_Default)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4823c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNNConstraint*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNNConstraint.SetStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNNConstraint::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathNNConstraint::SetStart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e482e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathNNConstraint*>(),
                    {::i2c::class_of<::Pathfinding::PathNNConstraint*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNNConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNNConstraint::*)()>(&::Pathfinding::PathNNConstraint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e482b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNNConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Pathfinding::PathNNConstraint* Pathfinding::PathNNConstraint::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNNConstraint*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathNNConstraint*>(nullptr, ___internal_method);
}
inline void Pathfinding::PathNNConstraint::SetStart(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PathNNConstraint*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathNNConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNNConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathNNConstraint* Pathfinding::PathNNConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathNNConstraint*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PathNNConstraint::PathNNConstraint()   {
}
