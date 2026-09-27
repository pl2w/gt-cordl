#pragma once
// IWYU pragma private; include "Pathfinding/RichPathPart.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__RichPathPart_def.hpp"
#include "Pathfinding/Util/zzzz__IAstarPooledObject_def.hpp"
//  Writing Method size for method: ::Pathfinding::RichPathPart.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPathPart::*)()>(&::Pathfinding::RichPathPart::OnEnterPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichPathPart*>(),
                    {::i2c::class_of<::Pathfinding::RichPathPart*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPathPart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPathPart::*)()>(&::Pathfinding::RichPathPart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e437d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPathPart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::RichPathPart::OnEnterPool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichPathPart*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichPathPart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPathPart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichPathPart* Pathfinding::RichPathPart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichPathPart*>());
}
/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr  Pathfinding::RichPathPart::operator ::Pathfinding::Util::IAstarPooledObject*() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* Pathfinding::RichPathPart::i___Pathfinding__Util__IAstarPooledObject() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RichPathPart::RichPathPart()   {
}
