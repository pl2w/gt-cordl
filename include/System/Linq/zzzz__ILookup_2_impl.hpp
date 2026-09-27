#pragma once
// IWYU pragma private; include "System/Linq/ILookup_2.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
template<typename TKey,typename TElement>
inline ::System::Collections::Generic::IEnumerable_1<TElement>* System::Linq::ILookup_2<TKey,TElement>::get_Item(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::ILookup_2<TKey,TElement>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TElement>*>(this, ___internal_method, key);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TKey,typename TElement>
constexpr  System::Linq::ILookup_2<TKey,TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* System::Linq::ILookup_2<TKey,TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr  System::Linq::ILookup_2<TKey,TElement>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr ::System::Collections::IEnumerable* System::Linq::ILookup_2<TKey,TElement>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
