#pragma once
// IWYU pragma private; include "Pathfinding/Util/GridLookup_1.hpp"
#include "Pathfinding/zzzz__Int2_impl.hpp"
#include "Pathfinding/zzzz__IntRect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__GridLookup_1_def.hpp"
#include "Pathfinding/Util/zzzz__GridLookup_1_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
template<typename T>
constexpr ::Pathfinding::Int2& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename T>
constexpr ::Pathfinding::Int2 const& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1<T>::__cordl_internal_set_size(::Pathfinding::Int2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
template<typename T>
constexpr ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_cells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cells;
}
template<typename T>
constexpr ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*> const& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_cells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cells;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1<T>::__cordl_internal_set_cells(::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cells = value;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_all()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___all;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_all() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___all;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1<T>::__cordl_internal_set_all(::Pathfinding::Util::GridLookup_1_Root<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___all = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_rootLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootLookup;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>* const& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_rootLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootLookup;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1<T>::__cordl_internal_set_rootLookup(::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootLookup = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_itemPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPool;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>* const& Pathfinding::Util::GridLookup_1<T>::__cordl_internal_get_itemPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPool;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1<T>::__cordl_internal_set_itemPool(::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemPool = value;
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1<T>::_ctor(::Pathfinding::Int2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1_Root<T>* Pathfinding::Util::GridLookup_1<T>::get_AllItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"get_AllItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GridLookup_1_Root<T>*>(this, ___internal_method);
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1_Root<T>* Pathfinding::Util::GridLookup_1<T>::GetRoot(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"GetRoot", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GridLookup_1_Root<T>*>(this, ___internal_method, item);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1_Root<T>* Pathfinding::Util::GridLookup_1<T>::Add(T  item, ::Pathfinding::IntRect  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GridLookup_1_Root<T>*>(this, ___internal_method, item, bounds);
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1<T>::Move(T  item, ::Pathfinding::IntRect  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                        {"Move", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, bounds);
}
template<typename T>
template<typename U>
requires(::cordl_internals::type_constraint<U, T> && ::cordl_internals::reference_type_constraint<U>)
inline ::System::Collections::Generic::List_1<U>* Pathfinding::Util::GridLookup_1<T>::QueryRect(::Pathfinding::IntRect  r)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::GridLookup_1<T>*>(),
                    {"QueryRect", {::i2c::class_of<U>()}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<U>*>(this, ___internal_method, r);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1<T>* Pathfinding::Util::GridLookup_1<T>::New_ctor(::Pathfinding::Int2  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::GridLookup_1<T>*>(size));
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1<T>::GridLookup_1()   {
}
template<typename T>
constexpr T& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_obj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
template<typename T>
constexpr T const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_obj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_obj(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obj = value;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_next(::Pathfinding::Util::GridLookup_1_Root<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_prev(::Pathfinding::Util::GridLookup_1_Root<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
template<typename T>
constexpr ::Pathfinding::IntRect& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_previousBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousBounds;
}
template<typename T>
constexpr ::Pathfinding::IntRect const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_previousBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousBounds;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_previousBounds(::Pathfinding::IntRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousBounds = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>* const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_items(::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
template<typename T>
constexpr bool& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_flag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
template<typename T>
constexpr bool const& Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_get_flag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Root<T>::__cordl_internal_set_flag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flag = value;
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1_Root<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1_Root<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1_Root<T>* Pathfinding::Util::GridLookup_1_Root<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::GridLookup_1_Root<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>::GridLookup_1_Root()   {
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_set_root(::Pathfinding::Util::GridLookup_1_Root<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Item<T>*& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Item<T>* const& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_set_prev(::Pathfinding::Util::GridLookup_1_Item<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Item<T>*& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Item<T>* const& Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr void Pathfinding::Util::GridLookup_1_Item<T>::__cordl_internal_set_next(::Pathfinding::Util::GridLookup_1_Item<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
template<typename T>
inline void Pathfinding::Util::GridLookup_1_Item<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GridLookup_1_Item<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Pathfinding::Util::GridLookup_1_Item<T>* Pathfinding::Util::GridLookup_1_Item<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::GridLookup_1_Item<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::GridLookup_1_Item<T>::GridLookup_1_Item()   {
}
