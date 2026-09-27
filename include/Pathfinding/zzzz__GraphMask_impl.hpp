#pragma once
// IWYU pragma private; include "Pathfinding/GraphMask.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphMask.get_everything
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)()>(&::Pathfinding::GraphMask::get_everything)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"get_everything", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphMask::*)(int32_t)>(&::Pathfinding::GraphMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4979c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Pathfinding::GraphMask)>(&::Pathfinding::GraphMask::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e497a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.op_Implicit___Pathfinding__GraphMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(int32_t)>(&::Pathfinding::GraphMask::op_Implicit___Pathfinding__GraphMask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e48238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.op_BitwiseAnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(::Pathfinding::GraphMask, ::Pathfinding::GraphMask)>(&::Pathfinding::GraphMask::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e497a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Pathfinding::GraphMask>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.op_BitwiseOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(::Pathfinding::GraphMask, ::Pathfinding::GraphMask)>(&::Pathfinding::GraphMask::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e497b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::Pathfinding::GraphMask>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.op_OnesComplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(::Pathfinding::GraphMask)>(&::Pathfinding::GraphMask::op_OnesComplement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e497b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_OnesComplement", {}, {::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphMask::*)(int32_t)>(&::Pathfinding::GraphMask::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e48050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.FromGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(::Pathfinding::NavGraph*)>(&::Pathfinding::GraphMask::FromGraph)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e497c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"FromGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::GraphMask::*)()>(&::Pathfinding::GraphMask::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e497dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphMask>(),
                    {::i2c::class_of<::Pathfinding::GraphMask>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask.FromGraphName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphMask (*)(::StringW)>(&::Pathfinding::GraphMask::FromGraphName)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5e497e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"FromGraphName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::get_everything()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"get_everything", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method);
}
inline void Pathfinding::GraphMask::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Pathfinding::GraphMask::op_Implicit_int32_t(::Pathfinding::GraphMask  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mask);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::op_Implicit___Pathfinding__GraphMask(int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, mask);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::op_BitwiseAnd(::Pathfinding::GraphMask  lhs, ::Pathfinding::GraphMask  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Pathfinding::GraphMask>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::op_BitwiseOr(::Pathfinding::GraphMask  lhs, ::Pathfinding::GraphMask  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::Pathfinding::GraphMask>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::op_OnesComplement(::Pathfinding::GraphMask  lhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"op_OnesComplement", {}, {::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, lhs);
}
inline bool Pathfinding::GraphMask::Contains(int32_t  graphIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, graphIndex);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::FromGraph(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"FromGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, graph);
}
inline ::StringW Pathfinding::GraphMask::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphMask>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Pathfinding::GraphMask Pathfinding::GraphMask::FromGraphName(::StringW  graphName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask>(),
                        {"FromGraphName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphMask>(nullptr, ___internal_method, graphName);
}
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GraphMask::GraphMask(int32_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphMask::GraphMask()   {
}
//  Writing Method size for method: ::Pathfinding::GraphMask___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphMask___c__DisplayClass12_0::*)()>(&::Pathfinding::GraphMask___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphMask___c__DisplayClass12_0._FromGraphName_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphMask___c__DisplayClass12_0::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::GraphMask___c__DisplayClass12_0::_FromGraphName_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e49a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask___c__DisplayClass12_0*>(),
                        {"<FromGraphName>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::GraphMask___c__DisplayClass12_0::__cordl_internal_get_graphName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphName;
}
constexpr ::StringW const& Pathfinding::GraphMask___c__DisplayClass12_0::__cordl_internal_get_graphName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphName;
}
constexpr void Pathfinding::GraphMask___c__DisplayClass12_0::__cordl_internal_set_graphName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphName = value;
}
inline void Pathfinding::GraphMask___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GraphMask___c__DisplayClass12_0::_FromGraphName_b__0(::Pathfinding::NavGraph*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphMask___c__DisplayClass12_0*>(),
                        {"<FromGraphName>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, g);
}
inline ::Pathfinding::GraphMask___c__DisplayClass12_0* Pathfinding::GraphMask___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphMask___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphMask___c__DisplayClass12_0::GraphMask___c__DisplayClass12_0()   {
}
