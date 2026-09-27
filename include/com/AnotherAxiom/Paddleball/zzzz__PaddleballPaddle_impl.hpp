#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/PaddleballPaddle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__PaddleballPaddle_def.hpp"
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::PaddleballPaddle.get_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::com::AnotherAxiom::Paddleball::PaddleballPaddle::*)()>(&::com::AnotherAxiom::Paddleball::PaddleballPaddle::get_Right)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::PaddleballPaddle*>(),
                        {"get_Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::PaddleballPaddle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::PaddleballPaddle::*)()>(&::com::AnotherAxiom::Paddleball::PaddleballPaddle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::PaddleballPaddle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& com::AnotherAxiom::Paddleball::PaddleballPaddle::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr bool const& com::AnotherAxiom::Paddleball::PaddleballPaddle::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void com::AnotherAxiom::Paddleball::PaddleballPaddle::__cordl_internal_set_right(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
inline bool com::AnotherAxiom::Paddleball::PaddleballPaddle::get_Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::PaddleballPaddle*>(),
                        {"get_Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::PaddleballPaddle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::PaddleballPaddle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::com::AnotherAxiom::Paddleball::PaddleballPaddle* com::AnotherAxiom::Paddleball::PaddleballPaddle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::com::AnotherAxiom::Paddleball::PaddleballPaddle*>());
}
// Ctor Parameters []
constexpr ::com::AnotherAxiom::Paddleball::PaddleballPaddle::PaddleballPaddle()   {
}
