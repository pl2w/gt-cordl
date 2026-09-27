#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IHeldItem.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::IHeldItem.InLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::IHeldItem::*)()>(&::GorillaTag::Cosmetics::IHeldItem::InLeftHand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::IHeldItem.InHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::IHeldItem::*)()>(&::GorillaTag::Cosmetics::IHeldItem::InHand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::IHeldItem.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::IHeldItem::*)()>(&::GorillaTag::Cosmetics::IHeldItem::IsMyItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GorillaTag::Cosmetics::IHeldItem::InLeftHand()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::IHeldItem::InHand()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::IHeldItem::IsMyItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IHeldItem*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
