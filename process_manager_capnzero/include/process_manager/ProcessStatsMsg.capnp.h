// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: ProcessStatsMsg.capnp

#ifndef CAPNP_INCLUDED_b49754e6832d5333_
#define CAPNP_INCLUDED_b49754e6832d5333_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include <capnzero/ID.capnp.h>
#include "ProcessStatMsg.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(e9d54899f47f5188);

}  // namespace schemas
}  // namespace capnp

namespace process_manager {

struct ProcessStatsMsg {
  ProcessStatsMsg() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(e9d54899f47f5188, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class ProcessStatsMsg::Reader {
public:
  typedef ProcessStatsMsg Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasSenderID() const;
  inline  ::capnzero::ID::Reader getSenderID() const;

  inline bool hasProcessStats() const;
  inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Reader getProcessStats() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class ProcessStatsMsg::Builder {
public:
  typedef ProcessStatsMsg Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSenderID();
  inline  ::capnzero::ID::Builder getSenderID();
  inline void setSenderID( ::capnzero::ID::Reader value);
  inline  ::capnzero::ID::Builder initSenderID();
  inline void adoptSenderID(::capnp::Orphan< ::capnzero::ID>&& value);
  inline ::capnp::Orphan< ::capnzero::ID> disownSenderID();

  inline bool hasProcessStats();
  inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Builder getProcessStats();
  inline void setProcessStats( ::capnp::List< ::process_manager::ProcessStatMsg>::Reader value);
  inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Builder initProcessStats(unsigned int size);
  inline void adoptProcessStats(::capnp::Orphan< ::capnp::List< ::process_manager::ProcessStatMsg>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::process_manager::ProcessStatMsg>> disownProcessStats();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class ProcessStatsMsg::Pipeline {
public:
  typedef ProcessStatsMsg Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::capnzero::ID::Pipeline getSenderID();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool ProcessStatsMsg::Reader::hasSenderID() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool ProcessStatsMsg::Builder::hasSenderID() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnzero::ID::Reader ProcessStatsMsg::Reader::getSenderID() const {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnzero::ID::Builder ProcessStatsMsg::Builder::getSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnzero::ID::Pipeline ProcessStatsMsg::Pipeline::getSenderID() {
  return  ::capnzero::ID::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void ProcessStatsMsg::Builder::setSenderID( ::capnzero::ID::Reader value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnzero::ID::Builder ProcessStatsMsg::Builder::initSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void ProcessStatsMsg::Builder::adoptSenderID(
    ::capnp::Orphan< ::capnzero::ID>&& value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnzero::ID> ProcessStatsMsg::Builder::disownSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool ProcessStatsMsg::Reader::hasProcessStats() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool ProcessStatsMsg::Builder::hasProcessStats() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Reader ProcessStatsMsg::Reader::getProcessStats() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Builder ProcessStatsMsg::Builder::getProcessStats() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void ProcessStatsMsg::Builder::setProcessStats( ::capnp::List< ::process_manager::ProcessStatMsg>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::process_manager::ProcessStatMsg>::Builder ProcessStatsMsg::Builder::initProcessStats(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void ProcessStatsMsg::Builder::adoptProcessStats(
    ::capnp::Orphan< ::capnp::List< ::process_manager::ProcessStatMsg>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::process_manager::ProcessStatMsg>> ProcessStatsMsg::Builder::disownProcessStats() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::process_manager::ProcessStatMsg>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

}  // namespace

#endif  // CAPNP_INCLUDED_b49754e6832d5333_
