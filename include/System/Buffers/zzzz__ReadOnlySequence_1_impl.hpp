#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequence_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequenceSegment_1_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence`1_SequenceType_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/zzzz__ExceptionArgument_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__SequencePosition_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
inline void System::Buffers::ReadOnlySequence_1<T>::setStaticF_Empty(::System::Buffers::ReadOnlySequence_1<T>  value)  {
::cordl_internals::setStaticField<::System::Buffers::ReadOnlySequence_1<T>, "Empty", ::System::Buffers::ReadOnlySequence_1<T>>(std::forward<::System::Buffers::ReadOnlySequence_1<T>>(value));
}
template<typename T>
inline ::System::Buffers::ReadOnlySequence_1<T> System::Buffers::ReadOnlySequence_1<T>::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::Buffers::ReadOnlySequence_1<T>, "Empty", ::System::Buffers::ReadOnlySequence_1<T>>();
}
template<typename T>
inline int64_t System::Buffers::ReadOnlySequence_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline bool System::Buffers::ReadOnlySequence_1<T>::get_IsSingleSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"get_IsSingleSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlyMemory_1<T> System::Buffers::ReadOnlySequence_1<T>::get_First()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"get_First", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::SequencePosition System::Buffers::ReadOnlySequence_1<T>::get_Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"get_Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::SequencePosition>(*this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1<T>::_ctor(::System::Buffers::ReadOnlySequenceSegment_1<T>*  startSegment, int32_t  startIndex, ::System::Buffers::ReadOnlySequenceSegment_1<T>*  endSegment, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startSegment, startIndex, endSegment, endIndex);
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1<T>::_ctor(::ArrayW<T>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1<T>::_ctor(::System::ReadOnlyMemory_1<T>  memory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, memory);
}
template<typename T>
inline ::StringW System::Buffers::ReadOnlySequence_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline ::System::SequencePosition System::Buffers::ReadOnlySequence_1<T>::GetPosition(int64_t  offset, ::System::SequencePosition  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetPosition", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::SequencePosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::SequencePosition>(*this, ___internal_method, offset, origin);
}
template<typename T>
inline bool System::Buffers::ReadOnlySequence_1<T>::TryGet(::by_ref<::System::SequencePosition>  position, ::by_ref<::System::ReadOnlyMemory_1<T>>  memory, bool  advance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"TryGet", {}, {::i2c::type_of<::by_ref<::System::SequencePosition>>(), ::i2c::type_of<::by_ref<::System::ReadOnlyMemory_1<T>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, position, memory, advance);
}
template<typename T>
inline bool System::Buffers::ReadOnlySequence_1<T>::TryGetBuffer(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  position, ::by_ref<::System::ReadOnlyMemory_1<T>>  memory, ::by_ref<::System::SequencePosition>  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"TryGetBuffer", {}, {::i2c::type_of<::by_ref<::System::SequencePosition>>(), ::i2c::type_of<::by_ref<::System::ReadOnlyMemory_1<T>>>(), ::i2c::type_of<::by_ref<::System::SequencePosition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, position, memory, next);
}
template<typename T>
inline ::System::ReadOnlyMemory_1<T> System::Buffers::ReadOnlySequence_1<T>::GetFirstBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetFirstBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlyMemory_1<T> System::Buffers::ReadOnlySequence_1<T>::GetFirstBufferSlow(::System::Object*  startObject, bool  isMultiSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetFirstBufferSlow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(*this, ___internal_method, startObject, isMultiSegment);
}
template<typename T>
inline ::System::SequencePosition System::Buffers::ReadOnlySequence_1<T>::Seek(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  start, int64_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"Seek", {}, {::i2c::type_of<::by_ref<::System::SequencePosition>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::SequencePosition>(*this, ___internal_method, start, offset);
}
template<typename T>
inline ::System::SequencePosition System::Buffers::ReadOnlySequence_1<T>::SeekMultiSegment(::System::Buffers::ReadOnlySequenceSegment_1<T>*  currentSegment, ::System::Object*  endObject, int32_t  endIndex, int64_t  offset, ::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"SeekMultiSegment", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::SequencePosition>(nullptr, ___internal_method, currentSegment, endObject, endIndex, offset, argument);
}
template<typename T>
inline ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> System::Buffers::ReadOnlySequence_1<T>::GetSequenceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetSequenceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>>(*this, ___internal_method);
}
template<typename T>
inline int32_t System::Buffers::ReadOnlySequence_1<T>::GetIndex(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetIndex", {}, {::i2c::type_of<::by_ref<::System::SequencePosition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position);
}
template<typename T>
inline int32_t System::Buffers::ReadOnlySequence_1<T>::GetIndex(int32_t  Integer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, Integer);
}
template<typename T>
inline int64_t System::Buffers::ReadOnlySequence_1<T>::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline bool System::Buffers::ReadOnlySequence_1<T>::TryGetString(::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"TryGetString", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, text, start, length);
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1<T>::GetFirstSpan(::by_ref<::System::ReadOnlySpan_1<T>>  first, ::by_ref<::System::SequencePosition>  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetFirstSpan", {}, {::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<T>>>(), ::i2c::type_of<::by_ref<::System::SequencePosition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first, next);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> System::Buffers::ReadOnlySequence_1<T>::GetFirstSpanSlow(::System::Object*  startObject, int32_t  startIndex, int32_t  endIndex, bool  hasMultipleSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1<T>>(),
                        {"GetFirstSpanSlow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, startObject, startIndex, endIndex, hasMultipleSegments);
}
// Ctor Parameters [CppParam { name: "_startObject", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_endObject", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startInteger", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_endInteger", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::System::Buffers::ReadOnlySequence_1<T>::ReadOnlySequence_1(::System::Object*  _startObject, ::System::Object*  _endObject, int32_t  _startInteger, int32_t  _endInteger) noexcept  {
this->_startObject = _startObject;
this->_endObject = _endObject;
this->_startInteger = _startInteger;
this->_endInteger = _endInteger;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::ReadOnlySequence_1<T>::ReadOnlySequence_1()   {
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1___c<T>::setStaticF___9(::System::Buffers::ReadOnlySequence_1___c<T>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::ReadOnlySequence_1___c<T>*, "<>9", ::System::Buffers::ReadOnlySequence_1___c<T>*>(std::forward<::System::Buffers::ReadOnlySequence_1___c<T>*>(value));
}
template<typename T>
inline ::System::Buffers::ReadOnlySequence_1___c<T>* System::Buffers::ReadOnlySequence_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Buffers::ReadOnlySequence_1___c<T>*, "<>9", ::System::Buffers::ReadOnlySequence_1___c<T>*>();
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1___c<T>::setStaticF___9__33_0(::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*, "<>9__33_0", ::System::Buffers::ReadOnlySequence_1___c<T>*>(std::forward<::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*>(value));
}
template<typename T>
inline ::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>* System::Buffers::ReadOnlySequence_1___c<T>::getStaticF___9__33_0()  {
return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*, "<>9__33_0", ::System::Buffers::ReadOnlySequence_1___c<T>*>();
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ReadOnlySequence_1___c<T>::_ToString_b__33_0(::System::Span_1<char16_t>  span, ::System::Buffers::ReadOnlySequence_1<char16_t>  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequence_1___c<T>*>(),
                        {"<ToString>b__33_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::Buffers::ReadOnlySequence_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, span, sequence);
}
template<typename T>
inline ::System::Buffers::ReadOnlySequence_1___c<T>* System::Buffers::ReadOnlySequence_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ReadOnlySequence_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::ReadOnlySequence_1___c<T>::ReadOnlySequence_1___c()   {
}
