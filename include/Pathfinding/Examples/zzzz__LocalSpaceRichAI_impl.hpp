#pragma once
// IWYU pragma private; include "Pathfinding/Examples/LocalSpaceRichAI.hpp"
#include "Pathfinding/zzzz__RichAI_impl.hpp"
#include "Pathfinding/Examples/zzzz__LocalSpaceRichAI_def.hpp"
#include "Pathfinding/zzzz__LocalSpaceGraph_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::LocalSpaceRichAI.RefreshTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::LocalSpaceRichAI::*)()>(&::Pathfinding::Examples::LocalSpaceRichAI::RefreshTransform)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ef4bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                        {"RefreshTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::LocalSpaceRichAI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::LocalSpaceRichAI::*)()>(&::Pathfinding::Examples::LocalSpaceRichAI::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ef4c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                    {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::LocalSpaceRichAI.CalculatePathRequestEndpoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::LocalSpaceRichAI::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::Examples::LocalSpaceRichAI::CalculatePathRequestEndpoints)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ef4c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                    {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::LocalSpaceRichAI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::LocalSpaceRichAI::*)()>(&::Pathfinding::Examples::LocalSpaceRichAI::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ef4cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                    {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::LocalSpaceRichAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::LocalSpaceRichAI::*)()>(&::Pathfinding::Examples::LocalSpaceRichAI::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ef4cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::LocalSpaceGraph>& Pathfinding::Examples::LocalSpaceRichAI::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::UnityW<::Pathfinding::LocalSpaceGraph> const& Pathfinding::Examples::LocalSpaceRichAI::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::Examples::LocalSpaceRichAI::__cordl_internal_set_graph(::UnityW<::Pathfinding::LocalSpaceGraph>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
inline void Pathfinding::Examples::LocalSpaceRichAI::RefreshTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                        {"RefreshTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::LocalSpaceRichAI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::LocalSpaceRichAI::CalculatePathRequestEndpoints(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void Pathfinding::Examples::LocalSpaceRichAI::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::LocalSpaceRichAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::LocalSpaceRichAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::LocalSpaceRichAI* Pathfinding::Examples::LocalSpaceRichAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::LocalSpaceRichAI*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::LocalSpaceRichAI::LocalSpaceRichAI()   {
}
