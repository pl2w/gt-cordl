#pragma once
// IWYU pragma private; include "System/Buffers/SequenceReader_1.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__SequencePosition_impl.hpp"
#include "System/Buffers/zzzz__SequenceReader_1_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__SequencePosition_def.hpp"
template<typename T>
inline bool System::Buffers::SequenceReader_1<T>::IsNext(::System::ReadOnlySpan_1<T>  next, bool  advancePast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"IsNext", {}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, next, advancePast);
}
template<typename T>
inline bool System::Buffers::SequenceReader_1<T>::IsNextSlow(::System::ReadOnlySpan_1<T>  next, bool  advancePast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"IsNextSlow", {}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, next, advancePast);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::_ctor(::System::Buffers::ReadOnlySequence_1<T>  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sequence);
}
template<typename T>
inline bool System::Buffers::SequenceReader_1<T>::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline ::System::Buffers::ReadOnlySequence_1<T> System::Buffers::SequenceReader_1<T>::get_Sequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_Sequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::ReadOnlySequence_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::SequencePosition System::Buffers::SequenceReader_1<T>::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::SequencePosition>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> System::Buffers::SequenceReader_1<T>::get_CurrentSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_CurrentSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::set_CurrentSpan(::System::ReadOnlySpan_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"set_CurrentSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t System::Buffers::SequenceReader_1<T>::get_CurrentSpanIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_CurrentSpanIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::set_CurrentSpanIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"set_CurrentSpanIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> System::Buffers::SequenceReader_1<T>::get_UnreadSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_UnreadSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template<typename T>
inline int64_t System::Buffers::SequenceReader_1<T>::get_Consumed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_Consumed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::set_Consumed(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"set_Consumed", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int64_t System::Buffers::SequenceReader_1<T>::get_Remaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_Remaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline int64_t System::Buffers::SequenceReader_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline bool System::Buffers::SequenceReader_1<T>::TryPeek(::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"TryPeek", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::GetNextSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"GetNextSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::Advance(int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"Advance", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::AdvanceCurrentSpan(int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"AdvanceCurrentSpan", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
template<typename T>
inline void System::Buffers::SequenceReader_1<T>::AdvanceToNextSpan(int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::SequenceReader_1<T>>(),
                        {"AdvanceToNextSpan", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
// Ctor Parameters [CppParam { name: "_currentPosition", ty: "::System::SequencePosition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nextPosition", ty: "::System::SequencePosition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_moreData", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Sequence_k__BackingField", ty: "::System::Buffers::ReadOnlySequence_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentSpan_k__BackingField", ty: "::System::ReadOnlySpan_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentSpanIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Consumed_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::System::Buffers::SequenceReader_1<T>::SequenceReader_1(::System::SequencePosition  _currentPosition, ::System::SequencePosition  _nextPosition, bool  _moreData, int64_t  _length, ::System::Buffers::ReadOnlySequence_1<T>  _Sequence_k__BackingField, ::System::ReadOnlySpan_1<T>  _CurrentSpan_k__BackingField, int32_t  _CurrentSpanIndex_k__BackingField, int64_t  _Consumed_k__BackingField) noexcept  {
this->_currentPosition = _currentPosition;
this->_nextPosition = _nextPosition;
this->_moreData = _moreData;
this->_length = _length;
this->_Sequence_k__BackingField = _Sequence_k__BackingField;
this->_CurrentSpan_k__BackingField = _CurrentSpan_k__BackingField;
this->_CurrentSpanIndex_k__BackingField = _CurrentSpanIndex_k__BackingField;
this->_Consumed_k__BackingField = _Consumed_k__BackingField;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::SequenceReader_1<T>::SequenceReader_1()   {
}
