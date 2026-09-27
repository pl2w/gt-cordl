#pragma once
// IWYU pragma private; include "GorillaTag/IResettableItem.hpp"
#include "GorillaTag/zzzz__IResettableItem_def.hpp"
//  Writing Method size for method: ::GorillaTag::IResettableItem.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::IResettableItem::*)()>(&::GorillaTag::IResettableItem::ResetToDefaultState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::IResettableItem*>(),
                    {::i2c::class_of<::GorillaTag::IResettableItem*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GorillaTag::IResettableItem::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::IResettableItem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
