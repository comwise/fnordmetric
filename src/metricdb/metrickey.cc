/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#include <fnordmetric/metricdb/metrickey.h>
#include <fnordmetric/util/runtimeexception.h>

namespace fnordmetric {
namespace metricdb {

const std::string& MetricKey::key() const {
  return key_;
}

void MetricKey::setKey(const std::string& key) {
  key_ = key;
}

const std::vector<std::pair<std::string, std::string>>& MetricKey::labels()
    const {
  return labels_;
}

void MetricKey::addLabel(const std::string& label, const std::string& value) {
  labels_.emplace_back(label, value);
}

}
}