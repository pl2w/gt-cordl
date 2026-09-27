#pragma once
// IWYU pragma private; include "Pathfinding/Progress.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
//  Writing Method size for method: ::Pathfinding::Progress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Progress::*)(float_t, ::StringW)>(&::Pathfinding::Progress::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e484d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Progress>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Progress.MapTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::Progress::*)(float_t, float_t, ::StringW)>(&::Pathfinding::Progress::MapTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e484dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Progress>(),
                        {"MapTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Progress.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Progress::*)()>(&::Pathfinding::Progress::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e48550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Progress>(),
                    {::i2c::class_of<::Pathfinding::Progress>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Progress::_ctor(float_t  progress, ::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Progress>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, progress, description);
}
inline ::Pathfinding::Progress Pathfinding::Progress::MapTo(float_t  min, float_t  max, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Progress>(),
                        {"MapTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(*this, ___internal_method, min, max, prefix);
}
inline ::StringW Pathfinding::Progress::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Progress>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Progress::Progress(float_t  progress, ::StringW  description) noexcept  {
this->progress = progress;
this->description = description;
}
// Ctor Parameters []
constexpr ::Pathfinding::Progress::Progress()   {
}
